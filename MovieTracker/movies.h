#ifndef _MOVIES_H_
#define _MOVIES_H_

// feel like I need to include these after the #ifndef shit
#include <string>
#include <vector>
#include "movie.h"

// Specification for movies class
// This class will essentially just hold a vector of movie objects specified within the movie.h file

class Movies {
private:
    // had an error with this for a while as I messed up using 'Movies' as class object - cannot refer to the class name itself
    std::vector<Movie> movies; // this will just be a vector of movie objects

public:

    // Constuctor
    Movies();
    // Destructor
    ~Movies();

    // Creating prototype for add_movie method
    bool add_movie(std::string title, std::string rating, int times_watched);
    // Prototype for incrementing the 'times watched' number
    bool increment_watched(std::string title);
    // Prototype for displaying each movie
    // Set this one to const because it wron't be changing each movie
    void display() const;

};





#endif // _MOVIES_H_