#include <iostream>
#include <string>

#include "movies.h"

// Need some helper functions to display messages

// Function prototypes
void add_movie(Movies &movies, std::string title, std::string rating, int times_watched);
void watched_again(Movies &movies, std::string title);


void add_movie(Movies &movies, std::string title, std::string rating, int times_watched) {
    if (movies.add_to_collection(title, rating, times_watched)) 
        std::cout << title << " added!" << std::endl;

    else 
        std::cout << "Movie already in collection!" << std::endl;
}

void watched_again(Movies &movies, std::string title) {
    if (movies.add_watch(title))
        std::cout << "Watch added!" << std::endl;

    else 
        std::cout << "Movie not found!" << std::endl;
}

int main() {

    std::cout << std::endl;


    std::cout << std::endl;

    return {};
}