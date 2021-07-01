#include <iostream>
#include <string>

#include "movies.h"

// Need some helper functions to display messages

// Function prototypes
void add_movie(Movies &movies, std::string title, std::string rating, int times_watched);
void show_collection();
void watched_again(Movies &movies, std::string title);


void add_movie(Movies &movies, std::string title, std::string rating, int times_watched) {
    if (movies.add_to_collection(title, rating, times_watched)) 
        std::cout << "\n" << title << " added!\n" << std::endl;

    else 
        std::cout << "Movie already in collection!\n" << std::endl;
}


void display_movies(Movies movies) {
    if (movies.show_collection())
        std::cout << "\nall movies shown" << std::endl;
    else    
        std::cout << "No movies to show!\n" << std::endl;
}


void watched_again(Movies &movies, std::string title) {
    if (movies.add_watch(title))
        std::cout << "Watch added!\n" << std::endl;

    else 
        std::cout << "Movie not found!\n" << std::endl;
}

int main() {

    std::cout << std::endl;

    Movies my_movies {};
    add_movie(my_movies, "Forrest Gump", "PG", 5);
    add_movie(my_movies, "I Am Legend", "15", 6);
    add_movie(my_movies, "Shrek", "U", 8);

    display_movies(my_movies);
    watched_again(my_movies, "Forrest Gump");
    display_movies(my_movies);
    
    std::cout << std::endl;

    return {};
}