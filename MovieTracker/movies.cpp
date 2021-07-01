#include <vector>
#include <string>
#include <iostream>

#include "movies.h"
#include "movie.h"

// Implementing the class

// Constructor implementation
Movies::Movies() {
    
}

void Movies::show_collection() {
    for (Movie movie: movies) {
        movie.display();
    }
}

// Only adding movies to the collection that aren't already there
bool Movies::add_to_collection(std::string title, std::string rating, int times_watched) {
    for (Movie movie: movies) {
        if (movie.get_title() == title)
            return false;
    }
    Movie temp {title, rating, times_watched};
    movies.push_back(temp);
    return true;
}

// Need to use a reference as we're changing the actual thing
bool Movies::add_watch(std::string title) {
    for (Movie &movie: movies) {
        if (movie.get_title() == title) {
            movie.increment_watched();
            return true;
        }
    }
    return false;
}


