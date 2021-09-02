#include "class_def.h"
#include <iostream>
#include <cstring>

Mystring::Mystring()
    // setting str as a null pointer first
    :str {nullptr} {
        // allocating space on the heap for it, just initialising it to one null character atm
        str = new char[1];
        *str = '\0';
    }

// Overloaded constructor
Mystring::Mystring(const char *s)
    :str {nullptr} {
        // Check is s is null already, if so, do the same as the default constructor
        if (s==nullptr) {
            str = new char[1];
            *str = '\0';
        } else {
            // using the c-style string methods
            // allocate enough space on the heap for s
            str = new char[std::strlen(s) + 1];
            // copy the contents of s into str
            std::strcpy(str,s);
        }
    }

// Copy constructor - deep copy for pointers please sir
Mystring::Mystring(const Mystring &source)
    :str {nullptr} {
        // Similar to overloaded constructor but using the string of the source (the object), rather than one we have inputted
        str = new char[std::strlen(source.str) + 1];
        std::strcpy(str,source.str);
    }

// Move constructor
Mystring::Mystring(Mystring &&source)
    // Copy the data from one pointer
    :str(source.str) {
        // Delete the copied pointer
        source.str = nullptr;
        std::cout << "Move constructor used" << std::endl;
    }


// Copy assignment
Mystring &Mystring::operator=(const Mystring &rhs) {
    std::cout << "Copy assignment" << std::endl;
    // First need to check that they're not already the same
    if (this == &rhs)
        return *this;
    else {
        delete [] str;
        str = new char[std::strlen(rhs.str) + 1];
        std::strcpy(str, rhs.str);
        return *this;
    }
}

// Move assignment
Mystring &Mystring::operator=(Mystring &&rhs) {
    std::cout << "Using move assignment" << std::endl;
    // Checking for self reference
    if (this == &rhs)
        return *this;
    else {
        delete [] str;
        str = rhs.str;
        rhs.str = nullptr;
        return *this;
    }
}

// Equality check operator
bool Mystring::operator==(const Mystring &rhs) const {
    // Use the c string style strcmp to get a boolean for if the two strings are equal
    return (std::strcmp(str, rhs.str) == 0);
}

// Make lower case operator
Mystring Mystring::operator-() const {
    // Allocate new space for a lower case copy
    char *buff = new char[std::strlen(str) + 1];
    // Copy str into buff
    std::strcpy(buff, str);
    // Loop through buff, making each letter lowercase
    for(size_t i {0}; i <std::strlen(buff); i++)
        buff[i] = std::tolower(buff[i]);
    // Create a mystring object as a copy of buff
    Mystring temp {buff};
    // Delete the memory used by buff as it is no longer being used
    delete [] buff;
    // Return the mystring object
    return temp;
}

// Concatenate
Mystring Mystring::operator+(const Mystring &rhs) const {
    // Allocate new space for a concatenated
    char *buff = new char[std::strlen(str) + std::strlen(rhs.str) + 1];
    // Copy str into buff
    std::strcpy(buff, str);
    // Use cstring concat function to concatenate shit
    std::strcat(buff, rhs.str);
    // Create Mystring object
    Mystring temp {buff};
    delete [] buff;
    return temp;
}


// Destructor
Mystring::~Mystring() {
    // Freeing up the memory we created for str
    delete [] str;
}

// length getter
int Mystring::get_length() const {
    return std::strlen(str);
}
// Display method
void Mystring::display() const {
    // calling the method afterwards to get the length of the pointer/string
    std::cout << str << " : " << get_length() << std::endl;
}
// string getter
// not void because it's returning the string at str
// need to dereference it first to access string rather than the pointer
const char *Mystring::get_str() const {
    return str;
}
