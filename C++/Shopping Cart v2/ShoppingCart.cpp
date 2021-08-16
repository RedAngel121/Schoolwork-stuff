#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <string>
#include <iterator>
#include "ItemToPurchase.h"
#include "ShoppingCart.h"
using namespace std;

ShoppingCart::ShoppingCart()
{
    customerName = "none";
    currentDate = "January 1, 2016";
}

ShoppingCart::ShoppingCart(string name, string date)
{
    customerName = name;
    currentDate = date;
}

void ShoppingCart::SetCustomerName(string x) { customerName = x; };
string ShoppingCart::GetCustomerName() { return customerName; };
void ShoppingCart::SetDate(string x) { currentDate = x; };
string ShoppingCart::GetDate() { return currentDate; };

void ShoppingCart::AddItem(ItemToPurchase cartItemInput)
{
    cartItemNameList.push_back(cartItemInput.GetName());
    cartItemDescriptionList.push_back(cartItemInput.GetDescription());
    cartItemPriceList.push_back(cartItemInput.GetPrice());
    cartItemQuantityList.push_back(cartItemInput.GetQuantity());
    cartItemPriceListCalculated.push_back(cartItemInput.GetPrice() * cartItemInput.GetQuantity());
};

void ShoppingCart::RemoveItem(string x)
{
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    string input;
    cout << "REMOVE ITEM FROM CART\nEnter name of item to remove:" << endl;
    getline(cin, input);
    auto vectorItr = find(cartItemNameList.begin(), cartItemNameList.end(), input);
    auto otherItr = vectorItr - cartItemNameList.begin();
    if (find(cartItemNameList.begin(), cartItemNameList.end(), input) != cartItemNameList.end())
    {
        cartItemNameList.erase(cartItemNameList.begin() + otherItr);
        cartItemDescriptionList.erase(cartItemDescriptionList.begin() + otherItr);
        cartItemQuantityList.erase(cartItemQuantityList.begin() + otherItr);
        cartItemPriceList.erase(cartItemPriceList.begin() + otherItr);
        cartItemPriceListCalculated.erase(cartItemPriceListCalculated.begin() + otherItr);
    }
    else
    {
        cout << "Item not found in cart. Nothing removed." << endl;
    }
};

void ShoppingCart::ModifyItem()
{
    cout << "CHANGE ITEM QUANTITY" << endl;
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    string input;
    cout << "Enter the item name:" << endl;
    getline(cin, input);
    int newQuantity;
    cout << "Enter the new quantity:" << endl;
    cin >> newQuantity;
    auto vectorItr = find(cartItemNameList.begin(), cartItemNameList.end(), input);
    auto otherItr = vectorItr - cartItemNameList.begin();
    if (find(cartItemNameList.begin(), cartItemNameList.end(), input) != cartItemNameList.end())
    {
        cartItemQuantityList.erase(cartItemQuantityList.begin() + otherItr);
        cartItemQuantityList.insert(cartItemQuantityList.begin() + otherItr, newQuantity);
        float newCalculatedPrice = cartItemPriceList[otherItr] * newQuantity;
        cartItemPriceListCalculated.erase(cartItemPriceListCalculated.begin() + otherItr);
        cartItemPriceListCalculated.insert(cartItemPriceListCalculated.begin() + otherItr, newCalculatedPrice);
    }
    else
    {
        cout << "Item not found in cart. Nothing modified." << endl;
    }
};

int ShoppingCart::GetNumItemsInCart()
{
    int totalItemsInCart = accumulate(cartItemQuantityList.begin(), cartItemQuantityList.end(), 0);
    cout << customerName << "'s Shopping Cart - " << currentDate << "\nNumber of Items: " << totalItemsInCart << endl << endl;
    if (cartItemNameList.size() == 0)
    {
        cout << "SHOPPING CART IS EMPTY" << endl;
    }
    else
    {
        for (size_t x = 0; x < cartItemNameList.size(); x++)
        {
            cout << cartItemNameList[x] << " " << cartItemQuantityList[x] << " @ $" << cartItemPriceList[x] << " = $" << cartItemPriceListCalculated[x] << endl;
        }
    }
    GetCostOfCart();
    return totalItemsInCart;
};

int ShoppingCart::GetCostOfCart()
{
    float x = accumulate(cartItemPriceListCalculated.begin(), cartItemPriceListCalculated.end(), 0);
    cout << "\nTotal: $" << x << endl;
    return x;
};

void ShoppingCart::PrintTotal()
{
    if (cartItemNameList.size() == 0)
    {
        cout << "SHOPPING CART IS EMPTY" << endl;
    }
    else
    {
        for (size_t x = 0; x < cartItemNameList.size(); x++)
        {
            cout << cartItemNameList[x] << " " << cartItemQuantityList[x] << " @ $" << cartItemPriceList[x] << " = $" << cartItemPriceListCalculated[x] << endl;
        }
    }
    GetCostOfCart();
};

void ShoppingCart::PrintDescriptions()
{
    cout << "OUTPUT ITEMS' DESCRIPTIONS" << endl;
    cout << customerName << "'s Shopping Cart - " << currentDate << "\n\nItem Descriptions" << endl;
    if (cartItemNameList.size() == 0)
    {
        cout << "SHOPPING CART IS EMPTY" << endl;
    }
    else
    {
        for (size_t x = 0; x < cartItemNameList.size(); x++)
        {
            cout << cartItemNameList[x] << ": " << cartItemDescriptionList[x] << endl;
        }
    }
};