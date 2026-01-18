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

inline City buildBangalore() {
    City bangalore("Bangalore");

    bangalore.addPlace(Place(
        "Cubbon Park",
        "Kasturba Road, Bangalore",
        "Bangalore",
        12.9763, 77.5929,
        "Park",
        4.5, 2, 0,
        {TravelerType::Relaxed, TravelerType::Budgeted}
    ));

    bangalore.addPlace(Place(
        "Lalbagh Botanical Garden",
        "Mavalli, Bangalore",
        "Bangalore",
        12.9507, 77.5848,
        "Garden",
        4.6, 2, 0,
        {TravelerType::Relaxed, TravelerType::Explorer}
    ));

    bangalore.addPlace(Place(
        "Bangalore Palace",
        "Vasanth Nagar, Bangalore",
        "Bangalore",
        12.9987, 77.5921,
        "Heritage",
        4.4, 2, 0,
        {TravelerType::Explorer}
    ));

    bangalore.addPlace(Place(
        "UB City",
        "Vittal Mallya Road, Bangalore",
        "Bangalore",
        12.9716, 77.5967,
        "Luxury",
        4.3, 1, 1,
        {TravelerType::Luxury}
    ));

    return bangalore;
}
inline City buildGoa() {
    City goa("Goa");

    goa.addPlace(Place(
        "Baga Beach",
        "Baga, North Goa",
        "Goa",
        15.5520, 73.7517,
        "Beach",
        4.4, 2, 0,
        {TravelerType::Relaxed, TravelerType::Budgeted}
    ));

    goa.addPlace(Place(
        "Anjuna Beach",
        "Anjuna, North Goa",
        "Goa",
        15.5736, 73.7408,
        "Beach",
        4.3, 2, 0,
        {TravelerType::Relaxed, TravelerType::Explorer}
    ));

    goa.addPlace(Place(
        "Basilica of Bom Jesus",
        "Old Goa",
        "Goa",
        15.5009, 73.9116,
        "Heritage",
        4.6, 2, 0,
        {TravelerType::Explorer}
    ));

    goa.addPlace(Place(
        "Taj Exotica Resort",
        "Benaulim, South Goa",
        "Goa",
        15.2642, 73.9281,
        "Luxury",
        4.7, 2, 1,
        {TravelerType::Luxury}
    ));

    return goa;
}
inline City getCityByChoice(int choice) {
    switch (choice) {
        case 1:
            return buildDelhi();
        case 2:
            return buildMumbai();
        case 3:
            return buildBangalore();
        case 4:
            return buildGoa();
        default:
            return buildDelhi();
    }
}




#endif
