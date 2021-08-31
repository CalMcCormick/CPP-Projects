/* 
Can overload operators to be used within classes.
When we use raw pointers in classes, we need to overload the assignment operator.
Can define types to be have similarly to the built in types i.e. + - * / - but they need to be explicitly defined.
Operator overloading is like 'syntactic sugar' - you're calling everything the same behind the scenes but the main script looks pretty.
When we do do this, it needs to make sence.
*/

// The example code is going ot be from a custom built string class, using raw pointers for extra practice
// All in seperate documents, check folder for the rest
#include <iostream>
#include "class_def.h"

int main() {

    // no args constructor
    Mystring empty;
    // overloaded constructor
    Mystring cal("Callum");
    // copy constructor
    Mystring eddy{cal};

    empty.display();
    cal.display();
    eddy.display();

    return {};
}