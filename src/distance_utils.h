#ifndef DISTANCE_UTILS_H
#define DISTANCE_UTILS_H

#include <cmath>
#include "place.h"

using namespace std;

// Converts degrees to radians
inline double toRadians(double degree) {
    return degree * (M_PI / 180.0);
}

// Calculates distance between two places using Haversine formula
inline double calculateDistance(const Place& p1, const Place& p2) {
    const double EARTH_RADIUS_KM = 6371.0;

    double lat1 = toRadians(p1.getLatitude());
    double lon1 = toRadians(p1.getLongitude());
    double lat2 = toRadians(p2.getLatitude());
    double lon2 = toRadians(p2.getLongitude());

    double dLat = lat2 - lat1;
    double dLon = lon2 - lon1;

    double a = pow(sin(dLat / 2), 2) +
               cos(lat1) * cos(lat2) *
               pow(sin(dLon / 2), 2);

    double c = 2 * atan2(sqrt(a), sqrt(1 - a));

    return EARTH_RADIUS_KM * c;
}

#endif
