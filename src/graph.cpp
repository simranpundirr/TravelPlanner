#include "graph.h"

Graph::Graph(int nodes) : numNodes(nodes) {
    adjList.resize(nodes);
}

void Graph::addEdge(int from, int to, double distance) {
    adjList[from].push_back({to, distance});
    adjList[to].push_back({from, distance}); 
}
const vector<pair<int, double>>& Graph::getNeighbors(int node) const {
    return adjList[node];
}

int Graph::getNumNodes() const {
    return numNodes;
}
