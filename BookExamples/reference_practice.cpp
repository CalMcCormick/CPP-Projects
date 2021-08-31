#include <iostream>


// function prototype
// will take the reference of an int and change it's value, rather than creating a copy of it 
void square_num(int &number);

int main() {

    char user_choice {'m'};

    // using a do-while loop so you can keep on going
    do {

    int num {0};
    std::cout << "Please enter a number you would like to square " << std::endl;
    std::cin >> num;

    std::cout << "You chose: " << num << std::endl;
    square_num(num);
    std::cout << "Your num sqared: " << num << std::endl;

    std::cout << "Would you like to go again? (y/n)" << std::endl;
    std::cin >> user_choice;
    
    } while (user_choice != 'n');
    
    return {};
}

// Passing by reference changes the actual value, rather than just altering the copy
// Could've made it return a new value of the variable squared, but that would mean creating memory for a new variable
void square_num(int &number) {
    number *= number;
}