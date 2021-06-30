#include <iostream>
#include "movies.h"

// prototypes
// actually want to change a movie attribute so need to use reference here
void increment_times_watched(Movies &movies, std::string title);
void add_movie(Movies &movies, std::string title, std::string rating, int times_watched);

void increment_times_watched(Movies &movies, std::string title) {
    if (movies.increment_watched(title)) {
        std::cout << title << " watch incremented" << std::endl;
    } else {
        std::cout << title << " not found" << std::endl;
    }
}

void add_movie(Movies &movies, std::string title, std::string rating, int times_watched) {
    if (movies.add_movie(title,rating,times_watched))
        std::cout << title << " added" << std::endl;
    else 
        std::cout << title << " already exists" << std::endl;
}

int main() {

    Movies my_movies {};
    
    add_movie(my_movies, "I Am Legend", "12", 6);
    add_movie(my_movies, "Forrest Gump", "PG", 11);

    my_movies.display();



    return {};
}