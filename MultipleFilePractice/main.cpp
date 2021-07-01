#include <iostream>
#include "classfile.h"


int main() {

    Person cal("Cal", 23);
    cal.get_name();
    cal.get_age();
    
    Person eddy("Eddy", 16);
    eddy.get_name();
    eddy.get_age();

    cal.scream();
    eddy.scream();

    return 0;
}