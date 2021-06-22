#include <iostream>

// making it easier going forwardm
using namespace std;

int main(){
    
    // initialising the variables closer to where they are used to keep up with C++ best practice
    cout << "What is the width of your room? (m)" << endl;
    double room_width {0};
    cin >> room_width;
    
    cout << "What is the length of your room? (m)" << endl;
    double room_length {0};
    cin >> room_length;
    
    // first bit of maths in C++
    cout << "The area of your room is: " << (room_width*room_length) << " sqauare m" << endl;
    
	return 0;
}
