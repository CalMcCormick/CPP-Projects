#include <iostream>
#include <vector>
#include <string>
#include "movies.h"

Movies::Movies() {}
Movies::~Movies() {}


// Implementing the add_movie method
bool Movies::add_movie(std::string title, std::string rating, int times_watched) {
    // Check to see if movies already contains a movie with the same title
    // Don't want to be changing the movie in this function! So make a const reference to the actual movie
    // As opposed to creating copies and making changes
    // Much more efficient
    for (const Movie &movie: movies) {
        if (movie.get_title() == title)
            return false;
    }
    // If it doesnt, make a Movie object from it, then push back that object into the Movies collection
    Movie temp {title, rating, times_watched};
    movies.push_back(temp);
    // Gotta return true
    return true;
    
}


bool Movies::increment_watched(std::string title) {
    // If you want to CHANGE the actual value, you need to use references to that value
    for (Movie &movie: movies) {
        if (movie.get_title() == title)
            movie.increment_times_watched();
            std::cout << "Times watched incremented to: " << movie.get_times_watched() << std::endl;
            return true;
    }
    return false;

}


void Movies::display() const {
    if (movies.size() == 0) 
        std::cout << "No movies to display" << std::endl;
    else {
        for (const Movie &movie: movies) {
            movie.display_movie();
        }
    }
}