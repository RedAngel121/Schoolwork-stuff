#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <string>
#include <iterator>
#include <math.h>

#include "ItemToPurchase.h"
#include "Wishlist.h"

using namespace std;

Wishlist wishData;
ItemToPurchase inputItems;

void PrintMenu()
{
    int displayFullMenu = 1;
    char c = '_';
    while (c != 'q')
    {
        if (displayFullMenu == 1)
        {
            cout << "\nMENU\na - Add item to wishlist\nd - Remove item from wishlist\nc - Change item quantity\ni - Output items' descriptions\no - Output wish list\ns - Shipping options\nq - Quit\n"
                 << endl;
            displayFullMenu = 0;
        }
        cout << "Choose an option:" << endl;
        cin >> c;
        string userStr;
        int userInt;
        string input;
        switch (c)
        {

        case 'a':
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "ADD ITEM TO WISHLIST" << endl;
            cout << "Enter the item name:" << endl;
            getline(cin, userStr);
            inputItems.SetName(userStr);
            cout << "Enter the item description:" << endl;
            getline(cin, userStr);
            inputItems.SetDescription(userStr);
            cout << "Enter the item price:" << endl;
            cin >> userInt;
            inputItems.SetPrice(userInt);
            cout << "Enter the item quantity:" << endl;
            cin >> userInt;
            inputItems.SetQuantity(userInt);
            wishData.AddItem(inputItems);
            displayFullMenu = 1;
            break;

        case 'd':
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "REMOVE ITEM FROM WISHLIST\nEnter name of item to remove:" << endl;
            getline(cin, input);
            wishData.RemoveItem(input);
            displayFullMenu = 1;
            break;

        case 'c':
            wishData.ModifyItem();
            displayFullMenu = 1;
            break;

        case 'i':
            wishData.PrintDescriptions();
            displayFullMenu = 1;
            break;

        case 'o':
            cout << "OUTPUT WISH LIST" << endl;
            wishData.GetNumItemsInWish();
            displayFullMenu = 1;
            break;

        case 's':
            int daysSelected;
            cout << "How many days can you wait on this purchase?" << endl;
            cin >> daysSelected;
            wishData.ShippingOptions(daysSelected);
            displayFullMenu = 1;
            break;

        case 'q':
            break;
        }
    }
    return;
}

int main()
{
    string userInputCustomerName, userInputDate;
    cout << "Enter customer's name:" << endl;
    getline(cin, userInputCustomerName);
    wishData.SetCustomerName(userInputCustomerName);
    cout << "Enter today's date:" << endl;
    getline(cin, userInputDate);
    wishData.SetDate(userInputDate);
    cout << "\nCustomer name: " << wishData.GetCustomerName() << "\nToday's date: " << wishData.GetDate() << endl;
    PrintMenu();
}