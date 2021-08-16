#ifndef ITEMTOPURCHASE_H
#define ITEMTOPURCHASE_H

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <string>
using namespace std;

class ItemToPurchase {

string itemName;
float itemPrice;
int itemQuantity;

public:
    ItemToPurchase() {
        string itemName = ("none");
        float itemPrice = 0;
        int itemQuantity = 0;
        // string givenItemName = ("none");
        // float givenItemPrice = 0;
        // int givenItemQuantity = 0;
    };
    void SetName(string);
    string GetName();
    void SetPrice(float);
    float GetPrice();
    void SetQuantity(int);
    int GetQuantity();
};

#endif