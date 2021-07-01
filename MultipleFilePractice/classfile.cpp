#include <iostream>
#include <string>
#include "classfile.h"


Person::Person(std::string name, int age)
    : name(name), age(age) {}

void Person::get_name() {
    std::cout << "Name: " << name << std::endl;
}

void Person::get_age() {
    std::cout << "Age: " << age << std::endl;
}

void Person::scream() {
    std::cout << name << " says" << std::endl;
    std::cout << "YEEEEEEEEEEEET BITCH" << std::endl;
}