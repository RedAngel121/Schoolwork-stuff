#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <string>
#include <iterator>
#include "ItemToPurchase.h"
using namespace std;

ItemToPurchase::ItemToPurchase()
{
    itemName = "none";
    itemDescription = "none";
    itemPrice = 0;
    itemQuantity = 0;
}

ItemToPurchase::ItemToPurchase(string name, string desc, int price, int quant)
{
    itemName = name;
    itemDescription = desc;
    itemPrice = price;
    itemQuantity = quant;
}

void ItemToPurchase::SetName(string x) { itemName = x; }
string ItemToPurchase::GetName() { return itemName; }
void ItemToPurchase::SetDescription(string x) { itemDescription = x; }
string ItemToPurchase::GetDescription() { return itemDescription; }
void ItemToPurchase::SetPrice(float x) { itemPrice = x; }
float ItemToPurchase::GetPrice() { return itemPrice; }
void ItemToPurchase::SetQuantity(int x) { itemQuantity = x; }
int ItemToPurchase::GetQuantity() { return itemQuantity; }
