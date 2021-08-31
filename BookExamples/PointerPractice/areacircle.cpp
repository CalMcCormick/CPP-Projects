#include <iostream>

// function prototype
// Creating pointers out of the references that come through within the function declaration
// keeping const correctness throughout
// Area doesn't need to be const as the function will be changing that
void CalcArea (const double* const ptrPi, const double* const ptrRadius,
                    double* const ptrArea);

int main() {

    const double pi {3.1416};

    double radius {};
    std::cout << "Please enter a radius: ";
    std::cin >> radius;

    // Passing everything to the function
    // First initialise the area, can probably do this within the function later on
    double area {};
    CalcArea (&pi, &radius, &area);

    std::cout << "\nThe area of your circle is: " <<  area << std::endl;
    // An int function needs to return an int!
    return {};
}

// Implementing the function prototype
// Using pointers stop you from copying the old variable and allow you to use it directly
void CalcArea (const double* const ptrPi, const double* const ptrRadius,
                    double* const ptrArea) {
                        
                        // Checking validiy of pointers before using
                        if (ptrPi && ptrRadius && ptrArea) {
                             // Dereference the Area pointer then put the area value in there
                             // Don't need to return anything because this changes the value at the pointer anyway
                             // Need to dereference the other pointers to use the values held at that address
                             *ptrArea = (*ptrPi) * (*ptrRadius) * (*ptrRadius);
                        };
                    } 