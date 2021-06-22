#include <iostream>

// I would like to expand on this project in the future and make it my first project with a GUI
using namespace std;

int main(){

    cout << "How much money do you have in dollars?" << endl;
    
    double usd_amount {0.0};
    cin >> usd_amount;
    
    cout << "\nNice, let's see how rich you'd be in:" << endl;
    
    // Setting these as constants so can change these here and they'll change everywhere
    const double euro_converter {0.84};
    const double gbp_converter {0.72};
    const double aud_converter {1.32};
    
    cout << "Europe: " << (usd_amount*euro_converter) << endl;
    cout << "Britain: " << (usd_amount*gbp_converter) << endl;
    cout << "Australian Dollars: " << (usd_amount*aud_converter) << endl;
    cout << "\nMove to Australia! You'll be richer!" << endl;
    
	return 0;
}
