#ifndef GRAPH_BUILDER_H
#define GRAPH_BUILDER_H

#include "city.h"
#include "graph.h"
#include "distance_utils.h"

inline Graph buildGraphForCity(const City& city) {
    const auto& places = city.getAllPlaces();
    int n = places.size();

    Graph graph(n);

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            double distance = calculateDistance(places[i], places[j]);
            graph.addEdge(i, j, distance);
        }
    }

    return graph;
}

#endif
