#include <iostream>

// So i don't have to repeat myself
using namespace std;

// Declaring constants - first time doing this so just keeping it simple

int main(){
	
    cout << "Welcome to Frank's Cleaning Service!" << endl;
    cout << "\nHow many small rooms would you like to be cleaned?" << endl;
    
    int num_of_small_rooms {0};
    cin >> num_of_small_rooms;
    
    cout << "\nHow many large rooms would you like to be cleaned?" << endl;
    int num_of_large_rooms {0};
    cin >> num_of_large_rooms;
    
    cout << "\nEstimate for carpet cleaning service:" << endl;
    cout << "Number of small rooms: " << num_of_small_rooms << endl;
    cout << "Number of large rooms: " << num_of_large_rooms << endl;
    
    // Declaring the charge per room values as doubles so they can be changed in the future
    const double charge_per_small_room {25.0};
    const double charge_per_large_room {35.0};
    
    const double sales_tax_rate {0.06};
    const int estimate_expiry {30};
    
    cout << "Price per small room: $" << charge_per_small_room << endl;
    cout << "Price per large room: $" << charge_per_large_room << endl;
    
    double total_cost {(num_of_small_rooms * charge_per_small_room) + (num_of_large_rooms * charge_per_large_room)};
    cout << "Cost: $" << total_cost << endl;

    double tax_cost {total_cost * sales_tax_rate};
    cout << "Tax: $" << tax_cost << endl;
    
    cout << "===============================\n";
    cout << "Total estimate: $" << tax_cost + total_cost << endl;
    cout << "This estimate is valid for " << estimate_expiry << " days" << endl;
    
	return 0;
}
