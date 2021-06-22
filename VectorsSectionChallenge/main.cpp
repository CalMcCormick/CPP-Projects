#include <iostream>
#include <vector>

using namespace std;


int main(){

    vector <int> vector_1 {};
    vector <int> vector_2 {};
    
    vector_1.push_back(10);
    vector_1.push_back(20);
    
    cout << "The first element of vector 1 is: " << vector_1.at(0) << endl;
    cout << "The second element of vector 1 is: " << vector_1.at(1) << endl;
    cout << "The current size of vector 1 is: " << vector_1.size() << " elements" << endl;
    
    vector_2.push_back(100);
    vector_2.push_back(200);
    
    cout << "\nThe first element of vector 2 is: " << vector_2.at(0) << endl;
    cout << "The second element of vector 2 is: " << vector_2.at(1) << endl;
    cout << "The current size of vector 2 is: " << vector_2.size() << " elements" << endl;
    
    vector <vector<int>> vector_2d {};
    
    vector_2d.push_back(vector_1);
    vector_2d.push_back(vector_2);
    
    cout << "\nOur 2D vector:" << endl;
    cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;
    
    int val_1 {0};
    int val_2 {0};
    
    cout << "\nWhat do you want to set vector 1 values at? seperate with a space: ";
    cin >> val_1;
    cin >> val_2;
    
    vector_1.at(0) = val_1;
    vector_1.at(1) = val_2;
    
    cout << "\nWhat do you want to set vector 2 values at? seperate with a space ";
    cin >> val_1;
    cin >> val_2;
    
    vector_2.at(0) = val_1;
    vector_2.at(1) = val_2;
    
    vector_2d.at(0) = vector_1;
    vector_2d.at(1) = vector_2;
    
    cout << "\nOur new 2D vector:" << endl;
    cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;   
    
	return 0;
}
