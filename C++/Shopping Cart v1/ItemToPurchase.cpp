#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <string>
#include "ItemToPurchase.h"
using namespace std;

void ItemToPurchase::SetName(string givenItemName) {itemName = givenItemName;}
string ItemToPurchase::GetName() {return itemName;};
void ItemToPurchase::SetPrice(float givenItemPrice) {itemPrice = givenItemPrice;}
float ItemToPurchase::GetPrice() {return itemPrice;};
void ItemToPurchase::SetQuantity(int givenItemQuantity) {itemQuantity = givenItemQuantity;}
int ItemToPurchase::GetQuantity() {return itemQuantity;};