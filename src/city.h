#ifndef CITY_H
#define CITY_H

#include <string>
#include <vector>
#include "place.h"

using namespace std;

class City {
private:
    string name;
    vector<Place> places;

public:
    City(string name);
    void addPlace(const Place& place);

    const vector<Place>& getAllPlaces() const;
    vector<Place> getPlacesForTraveler(TravelerType type) const;

    string getName() const;
};

#endif
