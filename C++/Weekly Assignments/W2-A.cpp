#include <iostream>
using namespace std;

int main() {
    int elevatorTotalNumberOfOccupants, weightInput, occupantNumber = 1, elevatorMaxWeight = 2500, weightBase = 0;

    cout << "Please enter the number of occupants: ";
    cin  >> elevatorTotalNumberOfOccupants;
    cout << "Please enter the weight of each occupant..." << endl;
    while (occupantNumber <= elevatorTotalNumberOfOccupants) {
        cout << "Occupant " << occupantNumber << ":" << endl;
        cin  >> weightInput;
        weightBase = weightBase + weightInput;
        occupantNumber ++;
    }
    if (elevatorMaxWeight < weightBase) {
        cout << "This elevator is too heavy by " << weightBase - elevatorMaxWeight <<" pounds." << endl;
    } else {
        cout << "Let's go!" << endl;
    }
    return 0;
};