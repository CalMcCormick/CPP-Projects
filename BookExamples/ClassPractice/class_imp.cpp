#include <iostream>
#include <string>
#include "class_hfile.h"

// Using a seperate CPP file to implement the class methods

// Constructor methods - use empty curly braces at the end as a default
BigBilly::BigBilly(int age, std::string name)
    : age(age), name(name) {}

BigBilly::BigBilly(int age, std::string name, std::string job)
    : age(age), name(name) , job(job) {}

BigBilly::BigBilly(int age, std::string name, std::string job, std::string fave_sport)
    : age(age), name(name) , job(job), fave_sport(fave_sport) {}

// Implement class methods
// Display methods
void BigBilly::get_age() {
    std::cout << "Age: " << age << std::endl;
}
void BigBilly::get_name() {
    std::cout << "Name: " << name << std::endl;
}
// Set methods
void BigBilly::set_job (std::string job_title) {
    job = job_title;
    std::cout << "Job set as: " << job << std::endl;
}
void BigBilly::set_fave_sport (std::string fave_sport_name) {
    fave_sport = fave_sport_name;
    std::cout << "Favourite sport set as: " << fave_sport << std::endl;
}
void BigBilly::say_cunt() {
    std::cout << "I am " << name << ". You sir, are a cunt" << std::endl;
}