using namespace std;

#ifndef ITEMTOPURCHASE_H
#define ITEMTOPURCHASE_H

class ItemToPurchase
{

private:
    string itemName, itemDescription;
    float itemPrice;
    int itemQuantity;

public:
    ItemToPurchase();
    ItemToPurchase(string, string, int, int);
    void SetName(string);
    string GetName();
    void SetPrice(float);
    float GetPrice();
    void SetQuantity(int);
    int GetQuantity();
    void SetDescription(string);
    string GetDescription();
};

#endif