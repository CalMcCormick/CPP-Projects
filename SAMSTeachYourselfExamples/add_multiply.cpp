/* 
Using an infinite for loop to better control the program
This program will ask a user for 2 numbers, ask if they want to change the numbers,
then will show the user the numbers added and multiplied.
This will carry on in a continous loop until the user selects to leave
*/

#include <iostream>

// Function prototype
void add_multiply(int num1, int num2);

// Function declaration
void add_multiply(int num1, int num2) {
    std::cout << std::endl;
    std::cout << num1 << " + " << num2 << " = " << (num1 + num2) << std::endl;
    std::cout << num1 << " x " << num2 << " = " << (num1 * num2) << std::endl;
}

int main() {

    // The infinite loop! How exciting!
    for (;;) {
    // Gather numbers
    int num1 {}, num2 {};
    std::cout << "\nPlease enter two integers seperated by a space " << std::endl;
    std::cin >> num1 >> num2;

    // See if numbers are correct
    char change_numbers {};
    std::cout << "\nYour numbers are: " << num1 << ", " << num2 << std::endl;
    std::cout << "Do you want to change these numbers? (Y/N) " << std::endl;
    std::cin >> change_numbers;

    // Restart program if user wants to change numbers
    if (change_numbers == 'Y' || change_numbers == 'y')
        continue;

    // Call the function
    add_multiply(num1, num2);

    // See if User wants to start again
    char continue_sums {};
    std::cout << "\nPress X to leave or any other key to repeat with new numbers " << std::endl;
    std::cin >> continue_sums;

    // Restart if X, exit if anything else
    if (continue_sums == 'X' || continue_sums == 'x')
        break;
    else
        continue;

    }

    return 0;
}