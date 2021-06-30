#include <iostream>
#include <string>
// Including a specification h file, just use "filename.h", DONT use <filename.h>
#include "movie.h"


// This is where we will be implementing the functions and constructors from the Movie class

// Implementing the contructor method
// Use ClassName::ClassName to initialise something for the class OUTSIDE of the scope of the class
Movie::Movie(std::string title, std::string rating, int times_watched) 
    // rewatch the constructor videos to further understand this syntax please
    : title(title), rating(rating), times_watched(times_watched) {} // include these for all implementations

// Implementing the copy constructor
// This is basically explicitly saying to the compiler 'this is how you should copy the object when you have to'
// Could have used the default copy constructor but wanted extra practice
Movie::Movie(const Movie &source)
    : Movie(source.title, source.rating, source.times_watched) {}

// Implementing the destructor 
// Again, need to rewatch vids to figure out why we are doing this
// Again, could've used the default destructor but wanted extra practice
Movie::~Movie() {}

// Implementing the display method
// NOTE THE DIFFERENCE IN SYNTAX FOR CLASS CONSTRUCTORS AND CLASS METHODS
// Essentially just displays all the different elements of the film
void Movie::display_movie() const {
    std::cout << title << ", " << rating << ", " << times_watched << std::endl;
}