#ifndef _MYSTRING_H_
#define _MYSTRING_H_

#include <cstring>
#include <iostream>

class Mystring {
private:
    char *str; // C-style

public:
    // Default constructor
    Mystring();
    // Overloaded constructor
    Mystring(const char *s);
    // Copy constructor
    Mystring(const Mystring &source);
    // Destructor
    ~Mystring();

    // Member methods
    void display() const;
    int get_length() const;
    // Returns a pointer to the string
    const char *get_str() const;
};

#endif