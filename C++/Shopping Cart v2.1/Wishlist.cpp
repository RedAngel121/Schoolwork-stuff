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

Wishlist::Wishlist()
{
    customerName = "none";
    currentDate = "January 1, 2016";
    taxRounded = 0;
}

Wishlist::Wishlist(string name, string date)
{
    customerName = name;
    currentDate = date;
}

void Wishlist::SetCustomerName(string x) { customerName = x; };
string Wishlist::GetCustomerName() { return customerName; };
void Wishlist::SetDate(string x) { currentDate = x; };
string Wishlist::GetDate() { return currentDate; };

void Wishlist::AddItem(ItemToPurchase wishItemInput)
{
    wishItemNameList.push_back(wishItemInput.GetName());
    wishItemDescriptionList.push_back(wishItemInput.GetDescription());
    wishItemPriceList.push_back(wishItemInput.GetPrice());
    wishItemQuantityList.push_back(wishItemInput.GetQuantity());
    wishItemPriceListCalculated.push_back(wishItemInput.GetPrice() * wishItemInput.GetQuantity());
};

void Wishlist::RemoveItem(string input)
{
    auto vectorItr = find(wishItemNameList.begin(), wishItemNameList.end(), input);
    auto otherItr = vectorItr - wishItemNameList.begin();
    if (find(wishItemNameList.begin(), wishItemNameList.end(), input) != wishItemNameList.end())
    {
        wishItemNameList.erase(wishItemNameList.begin() + otherItr);
        wishItemDescriptionList.erase(wishItemDescriptionList.begin() + otherItr);
        wishItemQuantityList.erase(wishItemQuantityList.begin() + otherItr);
        wishItemPriceList.erase(wishItemPriceList.begin() + otherItr);
        wishItemPriceListCalculated.erase(wishItemPriceListCalculated.begin() + otherItr);
    }
    else
    {
        cout << "Item not found in list. Nothing removed." << endl;
    }
};

void Wishlist::ModifyItem()
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
    auto vectorItr = find(wishItemNameList.begin(), wishItemNameList.end(), input);
    auto otherItr = vectorItr - wishItemNameList.begin();
    if (find(wishItemNameList.begin(), wishItemNameList.end(), input) != wishItemNameList.end())
    {
        wishItemQuantityList.erase(wishItemQuantityList.begin() + otherItr);
        wishItemQuantityList.insert(wishItemQuantityList.begin() + otherItr, newQuantity);
        float newCalculatedPrice = wishItemPriceList[otherItr] * newQuantity;
        wishItemPriceListCalculated.erase(wishItemPriceListCalculated.begin() + otherItr);
        wishItemPriceListCalculated.insert(wishItemPriceListCalculated.begin() + otherItr, newCalculatedPrice);
    }
    else
    {
        cout << "Item not found in wishlist. Nothing modified." << endl;
    }
};

int Wishlist::GetNumItemsInWish()
{
    int totalItemsInWish = accumulate(wishItemQuantityList.begin(), wishItemQuantityList.end(), 0);
    cout << customerName << "'s Wishlist - " << currentDate << "\nNumber of Items: " << totalItemsInWish << endl
         << endl;
    if (wishItemNameList.size() == 0)
    {
        cout << "WISHLIST IS EMPTY" << endl;
    }
    else
    {
        for (size_t x = 0; x < wishItemNameList.size(); x++)
        {
            cout << wishItemNameList[x] << " " << wishItemQuantityList[x] << " @ $" << wishItemPriceList[x] << " = $" << wishItemPriceListCalculated[x] << endl;
        }
    }
    GetCostOfWish();
    return totalItemsInWish;
};

int Wishlist::GetCostOfWish()
{
    float x = accumulate(wishItemPriceListCalculated.begin(), wishItemPriceListCalculated.end(), 0);
    cout << "\nTotal before shipping: $" << x << endl;
    if (taxRounded == 0)
    {
        cout << "Please choose a shipping option" << endl;
    }
    else
    {
        cout << "\nTotal after shipping: $" << x + taxRounded << endl;
    }
    return x;
};

void Wishlist::PrintTotal()
{
    if (wishItemNameList.size() == 0)
    {
        cout << "WISHLIST IS EMPTY" << endl;
    }
    else
    {
        for (size_t x = 0; x < wishItemNameList.size(); x++)
        {
            cout << wishItemNameList[x] << " " << wishItemQuantityList[x] << " @ $" << wishItemPriceList[x] << " = $" << wishItemPriceListCalculated[x] << endl;
        }
    }
    GetCostOfWish();
};

void Wishlist::PrintDescriptions()
{
    cout << "OUTPUT ITEMS' DESCRIPTIONS" << endl;
    cout << customerName << "'s Wishlist - " << currentDate << "\n\nItem Descriptions" << endl;
    if (wishItemNameList.size() == 0)
    {
        cout << "WISHLIST IS EMPTY" << endl;
    }
    else
    {
        for (size_t x = 0; x < wishItemNameList.size(); x++)
        {
            cout << wishItemNameList[x] << ": " << wishItemDescriptionList[x] << endl;
        }
    }
};

void Wishlist::ShippingOptions(int daysSelected)
{

    float shippingDiscount = .869343767643943122461;
    float initialPrice = 44;
    float totalShippingCost;
    int totalRounded;
    int days = daysSelected;
    if (days == 1)
    {
        totalShippingCost = initialPrice;
    }
    else
    {
        for (int x = 1; x < days; x++)
        {
            initialPrice = initialPrice * shippingDiscount;
            totalShippingCost = initialPrice;
        }
    }
    totalRounded = totalShippingCost * 1.6;
    taxRounded = (totalShippingCost * 1.15) * 1.6;
    cout << days << " day shipping will cost $" << totalRounded << endl;
    cout << "Total Shipping Costs with tax: $" << taxRounded << endl;
}