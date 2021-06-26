// Going to recreate the licst choice doc with functions!

#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

/*
Again, this is how this will work.
Get the user to input 5 values seperated by a space
Give them a menu with:
P - Print Numbers
A - Add Numbers
M - Display average of the numbers
S - Display the smallest number
L - Display the largest number
X - Suprise me
Q - Quit
*/

// Declare function prototypes
void print_numbers (vector<int> user_num);
int add_numbers (vector<int> user_num);
int get_mean (vector<int> user_num);
int get_smallest (vector<int> user_num);
int get_largest (vector<int> user_num);
void surprise_me ();

// Write the functions - could've done this after the main but wanted to do it prior just to get my head around it

void print_numbers (vector<int> user_num) {
    cout << "\nPrinting Numbers!" << endl;
    for (auto num: user_num)
        cout << num << endl;
}

int add_numbers (vector<int> user_num) {
    cout << "\nAdding Numbers!" << endl;
    int total {};
    for (auto num: user_num)
        total += num;
    cout << "Total: " << total << endl;
    return total;
}

int get_mean (vector<int> user_num) {
    cout << "\nGetting the mean!" << endl; 
    int total {};
    for (auto num: user_num)
        total += num;
    int mean {};
    mean = total/user_num.size();
    cout << "Mean: " << mean << endl;
    return mean;
}

// Cheated a little and just imported some useful headers
int get_smallest (vector<int> user_num) {
        cout << "\nGetting the smallest number!" << endl;
        int smallest {};
        smallest = *min_element(user_num.begin(), user_num.end());
        cout << "Smallest: " << smallest << endl;
        return smallest;
}

int get_largest (vector<int> user_num) {
        cout << "\nGetting the largest number!" << endl;
        int largest {};
        largest = *max_element(user_num.begin(), user_num.end());
        cout << "Largest: " << largest << endl;
        return largest;
}

void surprise_me () {
        cout << "\nYou're a disappointment to your parents" << endl; 
}

int main() { 


    vector<int> user_numbers {};
    int num1 {}, num2 {}, num3 {}, num4 {}, num5 {};

    cout << "Let's make a list and do some cool shit with it!" << endl;
    cout << "This time with functions!" << endl;
    cout << "Please enter 5 integers seperated by a space: " << endl;
    cin >> num1 >> num2 >> num3 >> num4 >> num5;

    user_numbers.push_back(num1);
    user_numbers.push_back(num2);
    user_numbers.push_back(num3);
    user_numbers.push_back(num4);
    user_numbers.push_back(num5);



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
        if  (selection == 'P' || selection == 'p') 
            print_numbers(user_numbers);

        else if  (selection == 'A' || selection == 'a') 
            add_numbers(user_numbers);


        else if  (selection == 'M' || selection == 'm') 
            get_mean(user_numbers); 
        

        else if  (selection == 'S' || selection == 's') 
            get_smallest(user_numbers); 
        

        else if  (selection == 'L' || selection == 'l') 
            get_largest(user_numbers); 

        else if  (selection == 'X' || selection == 'x') 
            surprise_me();

        else if  (selection == 'q' || selection == 'Q')
            cout << "\nBye!" << endl;

        else 
            cout << "\nWell that wasn't one of the options I mentioned, was it?\nTry again." << endl;

    } while (selection != 'q' && selection != 'Q');
  
    cout << endl;
    return 0;

}