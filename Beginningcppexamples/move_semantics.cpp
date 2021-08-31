/* Non-adressable values are R values
 Move semantics/constructors stop the endless copying of r-values
 If our class contains a raw pointer we must! deep copy
 Move constructor moves the object rather than copying it 
 You don't always see it in the compiler 
 
 
 Need to use R value references
 use &&
 references to temporary objects
 
 A move constructor moves the resource that's on the heap, rather than making a deep copy
 Default memberwise copy, but we can null out one of the pointers
 
 Cannot be a const modifier*/

 #include <iostream>
 
 int main() {

     // Declare a variable
     int num {100};

     // Create an L VALUE REFERENCE
     int &num_l_reference = num;

     // Create an R VALUE REFERENCE
     int &&num_r_reference = 70 + 30;

     return {};
 }

 /* example move constructor for a class called 'Move'
 If a move constructor isn't defined, then a default copy constructor will be used 

 Move::Move(Move &&source)
    : data{source.data} {
        source.data = nullptr;
    }

essentially just 'stealing' the data from one pointer and nulling out the other pointer */