#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>

/*
Get the user to input 5 values seperated by a space
Give them a menu with:
P - Print Numbers
A - Add Numbers
M - Display average of the numbers
S - Display the smallest number
L - Display the largest number
X - Suprise me
Q - Quit


Most complex C++ program so far - pretty easy after doing complicated python stuff,
just currently pretty slow with the syntax at the moment!
*/

using namespace std;

int main() { 


    vector<int> user_numbers {};
    int num1 {}, num2 {}, num3 {}, num4 {}, num5 {};

    cout << "Let's make a list and do some cool shit with it!" << endl;
    cout << "Please enter 5 integers seperated by a space: " << endl;
    cin >> num1 >> num2 >> num3 >> num4 >> num5;

    user_numbers.push_back(num1);
    user_numbers.push_back(num2);
    user_numbers.push_back(num3);
    user_numbers.push_back(num4);
    user_numbers.push_back(num5);

    int total {0};

    for (auto num: user_numbers)
        total += num;


    char selection {};

    do {
        // Creating our 'Menu' to come up in the terminal 
        cout << "\n=====================" << endl;
        cout << "Select an option:" << endl;
        cout << "P - Print Numbers" << endl;
        cout << "A - Add Numbers" << endl;
        cout << "M - Display Mean" << endl;
        cout << "S - Display Smallest" << endl;
        cout << "L - Display Largest" << endl;
        cout << "X - Surprise Me" << endl;
        cout << "Q: Quit" << endl;
        cin >> selection;
        cout << endl;

        // Creating the logic for each of the steps
        if  (selection == 'P' || selection == 'p') {

            cout << "\nPrinting Numbers!" << endl;
            for (auto num: user_numbers)
                cout << num << endl;

        }

        else if  (selection == 'A' || selection == 'a') {

            cout << "\nAdding Numbers!" << endl;
            cout << "Total: " << total << endl; 
        }

        else if  (selection == 'M' || selection == 'm') {

            cout << "\nGetting the mean!" << endl;
            cout << "Mean: " << (total/user_numbers.size()) << endl; 
        }

        else if  (selection == 'S' || selection == 's') {

            cout << "\nGetting the smallest number!" << endl;
            // Had to Google how to do this, so included the <algorithms> and <bits/stdc++.h> modules
            int smallest = *min_element(user_numbers.begin(), user_numbers.end());
            cout << "Smallest Number: " << smallest << endl; 
        }

        else if  (selection == 'L' || selection == 'l') {

            cout << "\nGetting the Largest number!" << endl;
            int largest = *max_element(user_numbers.begin(), user_numbers.end());
            cout << "Largest Number: " << largest << endl; 
        }

        else if  (selection == 'X' || selection == 'x') {

            cout << "\nYou're a disappointment to your parents" << endl; 
        }

        else if  (selection == 'q' || selection == 'Q')
            cout << "\nBye!" << endl;

        else 
            cout << "\nWell that wasn't one of the options I mentioned, was it?\nTry again." << endl;

    } while (selection != 'q' && selection != 'Q');
  
    cout << endl;
    return 0;

}