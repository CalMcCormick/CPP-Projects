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
