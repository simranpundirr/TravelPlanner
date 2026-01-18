#include "city.h"

City::City(string name) : name(name) {}

void City::addPlace(const Place& place) {
    places.push_back(place);
}
const vector<Place>& City::getAllPlaces() const {
    return places;
}
vector<Place> City::getPlacesForTraveler(TravelerType type) const {
    vector<Place> result;

    for (const auto& place : places) {
        if (place.isSuitableFor(type)) {
            result.push_back(place);
        }
    }

    return result;
}
string City::getName() const {
    return name;
}
