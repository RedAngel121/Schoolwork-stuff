// I designed this program to be able to add and remove items from a vector list, but not modify the elements. I could easily add this function but decided against it because I have been working on this for 6 hours already. 

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
vector<float> AdditionalOccupants(vector<float>, float);

// I had to use this "function" as a reference to make sure that the DisplayMenu() would still be able to use the AdditionalOccupants() function even though it comes after the DisplayMenu() function.

vector<float> DisplayMenu(vector<float> occupantWeights, float input) {
    int menuInput;
    while (true){
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "\nTotal number of occupants: " << occupantWeights.size() << endl;
    cout << "Total weight of occupants: " << accumulate(occupantWeights.begin(),occupantWeights.end(),0) << endl;
        if (2500 - accumulate(occupantWeights.begin(),occupantWeights.end(),0)>=0) {
            cout << "Free space left on elevator: " << (2500 - accumulate(occupantWeights.begin(),occupantWeights.end(),0)) << endl;
        } else {
            cout << "The elevator is " << accumulate(occupantWeights.begin(),occupantWeights.end(),0) - 2500 << " overweight. Please reduce the load." << endl;
        }
        cout << "\n--- Menu ---\n1 - Add new passengers\n2 - Delete latest entry\n3 - Remove a passenger\n4 - Reset all entries\n5 - Quit\n\nPlease make a selection: ";
        cin >> menuInput;
        if (menuInput == 1){AdditionalOccupants(occupantWeights, input);}
        else if (menuInput == 2) {
            cout << "Removed most recent entry " << occupantWeights.back() << endl << endl;
            occupantWeights.pop_back();
            if (occupantWeights.size() == 0) {AdditionalOccupants(occupantWeights, input);}
        } else if (menuInput == 3){
            cout << endl;
            for (auto itr=occupantWeights.begin(); itr!=occupantWeights.end();++itr) cout << *itr << " " << endl;
            cout << "\nPlease enter the weight you wish to remove: ";
            cin >> input;
            auto owVectorIndex = find(occupantWeights.begin(), occupantWeights.end(), input);
            occupantWeights.erase(owVectorIndex);
            cout << "Entry " << input << " has been deleted." << endl << endl;
            if (occupantWeights.size() == 0) {AdditionalOccupants(occupantWeights, input);} 
        } else if (menuInput == 4){
            occupantWeights.clear();
            cout << "\n\n--- ALL ENTRIES HAVE BEEN REMOVED ---\n\n";
            AdditionalOccupants(occupantWeights, input);
        } else {
            exit(0);
        }
    }
    return occupantWeights;
}

// The following Function is technically a repeat of the first one I commented about. But this one actually does something, that way when I use the function references inside other functions it'll still work.

vector<float> AdditionalOccupants(vector<float> occupantWeights, float input) {
    bool done=false;
    while (occupantWeights.size() < 25){
        if (done == true) {cout << "Type 'Done' or '0' to view the menu.\n";}
        if (occupantWeights.size() == 0) {cout << "Please enter the weight of the first passenger: ";done = true;}
        else {cout << "Please enter the weight of the next passenger: ";done = false;}
        cin >> input;
        if (!input) {break;}
        while (input < 0 || input > 1000) {cout << "Please enter a valid weight: ";cin.ignore();cin >> input;}
        occupantWeights.push_back(input);
    }
    DisplayMenu(occupantWeights, input);
    return occupantWeights;
}

int main() {
    vector<float> occupantWeights;
    float input;
    bool go = true;
    cout << "Welcome to Elevator Program v0.2" << endl;
    if (occupantWeights.size() == 0){
        AdditionalOccupants(occupantWeights, input);
    } else {
        DisplayMenu(occupantWeights, input);
    }
    return 0;
}