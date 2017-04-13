#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
#include <stdio.h>
using namespace std;
unordered_map<char, char> PARENT;
unordered_map<char, int> RANK;
struct Edge {
	char vertex1;
	char vertex2;
	int weight;
	Edge(char v1, char v2, int w):vertex1(v1), vertex2(v2), weight(w) {}
};
struct Graph {
	vector<char> vertice;
	vector<Edge> edges;
};
char find(char vertex) {
	if (PARENT[vertex] == vertex)
		return PARENT[vertex];
	else
		return find(PARENT[vertex]);
}
void Kruskal(Graph& g) {
	vector<Edge> A;
	//Initial: all vertices and edges
	for (auto c : g.vertice) {
		PARENT[c] = c;
		RANK[c] = 0;
	}
    //sort O(E*log(E)) Maximum Spanning Tree
	sort(g.edges.begin(), g.edges.end(), [](Edge x, Edge y) {return x.weight > y.weight;});
    //find new root and create a balance tree
	for (Edge e : g.edges) {         // O(E)
		char root1 = find(e.vertex1);  // O(E) worst case
		char root2 = find(e.vertex2);
		if (root1 != root2) {
			A.push_back(e);
			//Balance Union
			if (RANK[root1] > RANK[root2]) {
				PARENT[root2] = root1;
				RANK[root1]++;
			} else {
				PARENT[root1] = root2;
				RANK[root2]++;
			}
		}else{
            cout<<"Found a loop {"
                << e.vertex1<<", "<< e.vertex2
                <<"} have same root"<<endl;
		}
	}
	for (Edge e : A) {
		cout << "{"<< e.vertex1<<", "<< e.vertex2<<"}" << " w:" << e.weight << endl;
	}
}

int main() {
    int M, N;
    Graph g;
    freopen ("bike.in","r",stdin);
    //freopen ("01.out","w",stdout);
    cin>>M;
    cin>>N;
    cout<< M<<" "<<N <<endl;

    for(int i=0; i<M; i++){
        char v;
        cin>>v;
        cout<< v<< ", ";
        g.vertice.push_back(v);
    }
    cout<<endl;
    for(int i=0; i<N; i++){
        char v1,v2;
        int w;
        cin>>v1;
        cin>>v2;
        cin>>w;
        cout<< v1<< " "<< v2<< " "<< w<< endl;
        g.edges.push_back(Edge(v1, v2, w));
    }
    cout<<endl;
	Kruskal(g);

	return 0;
}
