#include <string>
#include <iostream>

#include "movie.h"


// Implement class in cpp file

// Implement constructor
// Repeat this until syntax is engrained in your soul
Movie::Movie(std::string title, std::string rating, int times_watched)
    : title(title), rating(rating), times_watched(times_watched) {}

void Movie::display() {
    std::cout << title << ", " << rating << ", " << times_watched << std::endl;
}

void Movie::increment_watched() {
    times_watched++;
}

std::string Movie::get_title() {
        return title;
}