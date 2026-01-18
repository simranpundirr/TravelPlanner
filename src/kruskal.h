#ifndef KRUSKAL_H
#define KRUSKAL_H

#include <vector>
#include <algorithm>
#include "graph.h"

using namespace std;

class DisjointSet {
private:
    vector<int> parent, rank;

public:
    DisjointSet(int n) : parent(n), rank(n, 0) {
        for (int i = 0; i < n; i++)
            parent[i] = i;
    }
    int find(int x) {
        if (parent[x] != x)
            parent[x] = find(parent[x]); 
        return parent[x];
    }
    bool unite(int a, int b) {
        a = find(a);
        b = find(b);

        if (a == b) return false;

        if (rank[a] < rank[b])
            parent[a] = b;
        else if (rank[a] > rank[b])
            parent[b] = a;
        else {
            parent[b] = a;
            rank[a]++;
        }

        return true;
    }
};
inline vector<pair<double, pair<int, int>>> kruskalMST(const Graph& graph) {
    vector<pair<double, pair<int, int>>> edges;
    int n = graph.getNumNodes();
    for (int u = 0; u < n; u++) {
        for (const auto& [v, w] : graph.getNeighbors(u)) {
            if (u < v) {
                edges.push_back({w, {u, v}});
            }
        }
    }

    sort(edges.begin(), edges.end());

    DisjointSet ds(n);
    vector<pair<double, pair<int, int>>> mst;

    for (const auto& edge : edges) {
        int u = edge.second.first;
        int v = edge.second.second;

        if (ds.unite(u, v)) {
            mst.push_back(edge);
        }
    }

    return mst;
}

#endif
