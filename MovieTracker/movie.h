// These headers & footers stop the class from being accessed too many times
#ifndef _MOVIE_H_
#define _MOVIE_H_
#include <string>


// Specification for movie class
// Apologies for this project, I'm going to be noting the crap out of it 
class Movie {
// Each class is by default set to private, so we need to specify what we want to be private and public
// i.e what can be accessed outside the class or not
private:
    // These are values that only the class can access
    std::string title;
    std::string rating;
    int times_watched;

public:

    // Constructor - expects all 3 values
    // Will be implemented in movie.cpp
    // Need to learn why we specify and implement classes in different folders
    Movie(std::string title, std::string rating, int times_watched);

    // Copy Constructor - empty, just including this so I know how that it's here by default anyway 
    // Don't need copy constructor and destructor if we're not using any raw pointers
    Movie(const Movie &source);

    // Destructor - don't need this here but including it to help get my head around it
    ~Movie();

    // Adding some basic setters and getters
    // Learn more about the 'this' keyword please

    // "this" is basially "self" from python, so it is a pointer to the object
    // it is usually implied and done automatically by compiler but sometimes we need to specify it ourselves
    // makes it less ambigous and easier to read - less debugging required

    // Using class methods to change/access private variables makes the class more secure
    // Should try to do this as standard practice
    // May as well implement these within the class as they are short
    void set_title(std::string title) {this->title = title;}

    // Also rewatch the const lecture
    
    // Const specifies to the compiler that this function will NOT be modifying a const value
    // include when we are working with const values i.e. something we don't want to change
    std::string get_title() const {return title;}

    // repeating the above but for rating
    void set_rating(std::string rating) {this->rating = rating;}
    std::string get_rating() const {return rating;}

    // repeating the above but for the amount of times the movie has been watched
    void set_times_watched(int times_watched) {this->times_watched = times_watched;}
    /*
    void set_times_watched(int times_watched) {
        this->times_watched = times_watched;
    }
    This is exactly the same as the one above but less time consuming
    */
    int get_times_watched() const {return times_watched;}

    // Func to implement times watched
    void increment_times_watched() {times_watched++;}

    // Will be implementing this function in the movie.cpp file
    // This is a function prototype 
    void display_movie() const;

};



#endif // _MOVIE_H_