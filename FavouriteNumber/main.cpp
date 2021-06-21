#include <iostream>

// my first C++ code, please excuse how sad it is

using std::cout;
using std::cin;
using std::endl;

int main() 
{
    int favourite_number;
    
    cout << "What's your favourite number broski? ";
    cin >> favourite_number;
    
    // Just wanted to see that if/else works the same as it does in Python
    
    if (favourite_number != 42) {
    cout << "Sick, that's a solid number" << endl;
    cout << "Seriously bro, " << favourite_number << " is a great number, but 42 is better" << endl;
    cout << "Why? I hear you ask... It's the meaning of life!" << endl;
    }
    
    else {
    cout << "Holy shit that's my favourite number too! It's the meaning of life bro" << endl;
    }
    
    return 0;
}