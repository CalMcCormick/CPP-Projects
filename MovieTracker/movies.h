#ifndef _MOVIES_H_
#define _MOVIES_H_

#include <iostream>
#include <string>
#include <vector>


#include "movie.h"


// Specifying the class
class Movies {

private:
    // Just going to be a vector of Movie objects
    std::vector<Movie> movies;

public:

    // Constructor
    Movies();

    // Display movie collection
    bool show_collection();

    bool add_to_collection(std::string title, std::string rating, int times_watched);

    bool add_watch(std::string title);


};



#endif 