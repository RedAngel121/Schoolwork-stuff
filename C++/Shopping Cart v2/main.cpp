#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <string>
#include <iterator>
#include "ItemToPurchase.h"
#include "ShoppingCart.h"
using namespace std;

ShoppingCart cartData;

void PrintMenu()
{
    int displayFullMenu = 1;
    char c = '_';
    while (c != 'q')
    {
        if (displayFullMenu == 1)
        {
            cout << "\nMENU\na - Add item to cart\nd - Remove item from cart\nc - Change item quantity\ni - Output items' descriptions\no - Output shopping cart\nq - Quit\n"
                 << endl;
            displayFullMenu = 0;
        }
        cout << "Choose an option:" << endl;
        cin >> c;
        ItemToPurchase inputItems;
        string userStr;
        int userInt;
        switch (c)
        {
        case 'a':
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "ADD ITEM TO CART" << endl;
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
            cartData.AddItem(inputItems);
            displayFullMenu = 1;
            break;

        case 'd':
            cartData.RemoveItem("");
            displayFullMenu = 1;
            break;

        case 'c':
            cartData.ModifyItem();
            displayFullMenu = 1;
            break;

        case 'i':
            cartData.PrintDescriptions();
            displayFullMenu = 1;
            break;

        case 'o':
            cout << "OUTPUT SHOPPING CART" << endl;
            cartData.GetNumItemsInCart();
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
    cartData.SetCustomerName(userInputCustomerName);
    cout << "Enter today's date:" << endl;
    getline(cin, userInputDate);
    cartData.SetDate(userInputDate);
    cout << "\nCustomer name: " << cartData.GetCustomerName() << "\nToday's date: " << cartData.GetDate() << endl;
    PrintMenu();
}