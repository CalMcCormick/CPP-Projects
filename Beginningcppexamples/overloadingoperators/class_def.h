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
    // Move constructor
    Mystring(Mystring &&source);
    // Destructor
    ~Mystring();

    // Operator Overloading - copy assignment
    // Keeping it const because we don't want to fuck with it.
    Mystring &operator=(const Mystring &rhs);

    // IF WE WANT TO DO THIS WITH R VALUES WE USE THE DOUBLE &&
    // That wouold be a move constructor, remove the need for a deep copy & make everything a bit more efficient
    // Move assignment operator
    Mystring &operator=(Mystring &&rhs);

    // Other operator overloading
    // Make the string lowercase
    // Unary operators take no parameters
    Mystring operator-() const;

    // Concatenation operator overloader
    // Binary operators take one paramet
    Mystring operator+(const Mystring &rhs) const;

    // Equality operator
    bool operator==(const Mystring &rhs) const;


    // Member methods
    void display() const;
    int get_length() const;
    // Returns a pointer to the string
    const char *get_str() const;
};

#endif