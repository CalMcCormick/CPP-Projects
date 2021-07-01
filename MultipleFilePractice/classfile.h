#ifndef _CLASSFILE_H_
#define _CLASSFILE_H_

#include <string>

// Specifying the class

class Person {
private:

    std::string name;
    int age;
public:
    // Constructor
    Person(std::string name, int age);

    // Prototypes
    void get_name();
    void get_age();
    void scream();

};


#endif 