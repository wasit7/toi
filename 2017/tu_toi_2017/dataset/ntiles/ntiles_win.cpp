#include <bits/stdc++.h>
using namespace std;
const int INF = 1e9, dx[4] = {-1, 0, 1, 0}, dy[4] = {0, 1, 0, -1};
struct state {
	int n, a[3][3];
	pair<int,int> cz;
	bool valid(int x, int y) {
		return (x >= 0 && x < n && y >= 0 && y < n);
	}
	bool operator==(const state& rhs) const {
		bool ret = true;
		for(int i = 0; i < n; i++) for(int j = 0; j < n; j++) if(a[i][j] != rhs.a[i][j]) return false;
		return true;
	}
	struct hash {
		auto operator() (const state& s) const {
			int ex = 1, ret = 0;
			for(int i = 0; i < s.n; i++) for(int j = 0; j < s.n; j++) {
				ret += ex*s.a[i][j];
				ex *= 10;
			}
			return ret;
		}
	};
};

int solve(state s) {
	queue<state> q;
	unordered_map<state, int, state::hash> d;
	q.push(s);
	d[s] = 0;
	while(!q.empty()) {
		s = q.front();
		q.pop();
		vector<int> tester;
		for(int i = 0; i < s.n; i++) for(int j = 0; j < s.n; j++) tester.push_back(s.a[i][j]);
		if(is_sorted(tester.begin(), tester.end())) return d[s];
		for(int k = 0; k < 4; k++) if(s.valid(s.cz.first+dx[k], s.cz.second+dy[k])) {
			state cpy = s;
			cpy.cz = {s.cz.first+dx[k], s.cz.second+dy[k]};
			swap(cpy.a[cpy.cz.first][cpy.cz.second], cpy.a[s.cz.first][s.cz.second]);
			if(!d.count(cpy)) {
				d[cpy] = d[s]+1;
				q.push(cpy);
			}
		}
	}
}

int main() {
	int m;
	cin >> m;
	while(m--) {
		state s;
		cin >> s.n;
		for(int i = 0; i < s.n; i++) for(int j = 0; j < s.n; j++) {
			cin >> s.a[i][j];
			if(s.a[i][j] == 0) s.cz = {i, j};
		}
		cout << solve(s) << endl;
	}
}
