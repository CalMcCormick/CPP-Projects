// These are always in the H files for some reason

#ifndef _CLASS_H_
#define _CLASS_H_

#include <string>

class BigBilly {
// Make class variables private so you don't accidentally fuck with them
private:
    int age;
    std::string name;
    std::string job;
    std::string fave_sport;

// View/set class variables via public class methods
public:
    // Constructor methods
    // Create multiple so the user has options
    BigBilly(int age, std::string name);
    BigBilly(int age, std::string name, std::string job);
    BigBilly(int age, std::string name, std::string job, std::string fave_sport);

    // Method prototypes (the same as general function prototypes)
    void get_age();
    void get_name();
    // Methods to add extra shit to class object
    void set_job (std::string job_title);
    void set_fave_sport (std::string fave_sport_name);
    void say_cunt();
}; // don't forget the semi colon after declaring the class

#endif
