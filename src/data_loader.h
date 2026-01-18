#ifndef DATA_LOADER_H
#define DATA_LOADER_H

#include "city.h"
#include "place.h"

// Build Delhi city with predefined places
inline City buildDelhi() {
    City delhi("Delhi");

    delhi.addPlace(Place(
        "Red Fort",
        "Netaji Subhash Marg, Old Delhi",
        "Delhi",
        28.6562, 77.2410,
        "Heritage",
        4.6, 2, 0,
        {TravelerType::Explorer, TravelerType::Budgeted}
    ));

    delhi.addPlace(Place(
        "India Gate",
        "Rajpath, New Delhi",
        "Delhi",
        28.6129, 77.2295,
        "Landmark",
        4.6, 1, 0,
        {TravelerType::Explorer, TravelerType::Relaxed}
    ));

    delhi.addPlace(Place(
        "Lodhi Garden",
        "Lodhi Road, New Delhi",
        "Delhi",
        28.5933, 77.2197,
        "Leisure",
        4.5, 1, 0,
        {TravelerType::Relaxed, TravelerType::Budgeted}
    ));

    delhi.addPlace(Place(
        "Qutub Minar",
        "Mehrauli, New Delhi",
        "Delhi",
        28.5244, 77.1855,
        "Heritage",
        4.6, 2, 0,
        {TravelerType::Explorer}
    ));

    return delhi;
}

#endif
