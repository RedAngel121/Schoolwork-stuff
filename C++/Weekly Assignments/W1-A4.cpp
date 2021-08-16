#include <iostream>
using namespace std;

int main() {
    int currentYear;
    int birthInput;

    cout << "Happy Birthday." << endl;
    cout << "Enter current year:" << endl;
    cin  >> currentYear;
    cout << "Enter birth year:" << endl;
    cin  >> birthInput;
    cout << int (currentYear - birthInput) << endl;
    return 0;
};