#ifndef _PRACTICING_H_
#define _PRACTICING_H_


// Specification for movie class
class Movie {
private:
    std::string title;
    std::string rating;
    int times_watched;

public:

    void add_movie(std::string title_val, std::string rating_val, int times_watched_val) {
        title = title_val;
        rating = rating_val;
        times_watched = times_watched_val;
    }

    Movie(std::string title, std::string rating, int times_watched) {
    }

    ~Movie () {}

};



#endif