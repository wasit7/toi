#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
#include <stdio.h>
using namespace std;
unordered_map<int, int> PARENT;
unordered_map<int, int> RANK;
struct Edge {
	int vertex1;
	int vertex2;
	int weight;
	Edge(int v1, int v2, int w):vertex1(v1), vertex2(v2), weight(w) {}
};
struct Graph {
	vector<int> vertice;
	vector<Edge> edges;
};
int find(int vertex) {
	if (PARENT[vertex] == vertex)
		return PARENT[vertex];
	else
		return find(PARENT[vertex]);
}
int mst(Graph& g) {
    int sumcost=0;
	vector<Edge> A;
	for (auto c : g.vertice) {
		PARENT[c] = c;
		RANK[c] = 0;
	}
	sort(g.edges.begin(), g.edges.end(), [](Edge x, Edge y) {return x.weight > y.weight;});
	for (Edge e : g.edges) {         // O(E)
		int root1 = find(e.vertex1);  // O(E) worst case
		int root2 = find(e.vertex2);
		if (root1 != root2) {
			A.push_back(e);
			if (RANK[root1] > RANK[root2]) {
				PARENT[root2] = root1;
				RANK[root1]++;
			} else {
				PARENT[root1] = root2;
				RANK[root2]++;
			}
		}else{
		    sumcost+=e.weight;
		}
	}
    return sumcost;
}

int main() {
    int M, N;
    Graph g;
    cin>>M;
    cin>>N;
    for(int i=0; i<M; i++){
        int v;
        cin>>v;
        g.vertice.push_back(v);
    }
    for(int i=0; i<N; i++){
        int v1,v2;
        int w;
        cin>>v1;
        cin>>v2;
        cin>>w;
        g.edges.push_back(Edge(v1, v2, w));
    }
	cout<<mst(g);
	return 0;
}
