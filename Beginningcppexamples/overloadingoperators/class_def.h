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

    // Operator Overloading - copy assignment
    // Keeping it const because we don't want to fuck with it.
    Mystring &operator=(const Mystring &rhs);

    // Member methods
    void display() const;
    int get_length() const;
    // Returns a pointer to the string
    const char *get_str() const;
};

#endif