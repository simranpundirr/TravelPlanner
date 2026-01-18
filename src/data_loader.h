#ifndef DATA_LOADER_H
#define DATA_LOADER_H

#include "city.h"
#include "place.h"

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
inline City buildMumbai() {
    City mumbai("Mumbai");

    mumbai.addPlace(Place(
        "Gateway of India",
        "Apollo Bandar, Colaba, Mumbai",
        "Mumbai",
        18.9220, 72.8347,
        "Landmark",
        4.6, 1, 0,
        {TravelerType::Explorer, TravelerType::Relaxed}
    ));

    mumbai.addPlace(Place(
        "Marine Drive",
        "Netaji Subhash Chandra Bose Road, Mumbai",
        "Mumbai",
        18.9430, 72.8238,
        "Leisure",
        4.5, 1, 0,
        {TravelerType::Relaxed, TravelerType::Budgeted}
    ));

    mumbai.addPlace(Place(
        "Elephanta Caves",
        "Elephanta Island, Mumbai Harbour",
        "Mumbai",
        18.9633, 72.9312,
        "Heritage",
        4.5, 3, 0,
        {TravelerType::Explorer}
    ));

    mumbai.addPlace(Place(
        "Juhu Beach",
        "Juhu, Mumbai",
        "Mumbai",
        19.1075, 72.8263,
        "Beach",
        4.3, 2, 0,
        {TravelerType::Relaxed, TravelerType::Budgeted}
    ));

    return mumbai;
}


#endif
