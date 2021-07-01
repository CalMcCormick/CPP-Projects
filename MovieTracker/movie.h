#ifndef _MOVIE_H_
#define _MOVIE_H_

#include <string>


// Specify class in h file
class Movie {

private:
    // Variables needed
    std::string title;
    std::string rating;
    int times_watched;

public:

    // Contructor
    Movie(std::string title, std::string rating, int times_watched);

    // Display movie
    void display();

    std::string get_title();

    // Increase times watched
    void increment_watched();

    

};

#endif 