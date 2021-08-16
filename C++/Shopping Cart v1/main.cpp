/*

(3) Add the costs of the two items together and output the total

TOTAL COST
Chocolate Chips 1 @ $3 = $3
Bottled Water 10 @ $1 = $10

Total: $13

*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <string>
#include "ItemToPurchase.h"
using namespace std;

int Items = 1;
string userInputFoodItemName;
float userInputFoodItemPrice;
int userInputFoodItemQuantity;
vector<string> foodNameList;
vector<float> cartItemPriceList;
vector<int> cartItemQuantityList;

int main()
{
    ItemToPurchase inputItemToList;
    while (Items <=2)
    {
        cout << "Item " << Items << endl;
        cout << "Enter the item name:" << endl;
        getline(cin, userInputFoodItemName);
        inputItemToList.SetName(userInputFoodItemName);
        foodNameList.push_back(userInputFoodItemName);
        cout << "Enter the item price:" << endl;
        cin >> userInputFoodItemPrice;
        inputItemToList.SetPrice(userInputFoodItemPrice);
        cartItemPriceList.push_back(userInputFoodItemPrice);
        cout << "Enter the item quantity:" << endl;
        cin >> userInputFoodItemQuantity;
        inputItemToList.SetQuantity(userInputFoodItemQuantity);
        cartItemQuantityList.push_back(userInputFoodItemQuantity);
        Items++;
        // use a "store current list information" thing into an array or vector or something...
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << endl;
    }
    // Its basically done, i just need to find a way to store inputs for later and return them individually when needed.
    cout << "TOTAL COST" << endl;
    cout << foodNameList[0] << " " << cartItemQuantityList[0] << " @ $" << cartItemPriceList[0] << " = $" << cartItemQuantityList[0] * cartItemPriceList[0] << endl;
    cout << inputItemToList.GetName() << " " << inputItemToList.GetQuantity() << " @ $" << inputItemToList.GetPrice() << " = $" << inputItemToList.GetQuantity() * inputItemToList.GetPrice() << endl;
    cout << "\nTotal: $" << (cartItemPriceList[0] * cartItemQuantityList[0]) + (cartItemPriceList[1] * cartItemQuantityList[1]) << endl;
}