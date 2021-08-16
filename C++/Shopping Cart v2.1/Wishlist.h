using namespace std;

#ifndef Wishlist_H
#define Wishlist_H

class Wishlist
{
    ItemToPurchase inputItems;

private:
    vector<int> wishItemQuantityList;
    vector<float> wishItemPriceList, wishItemPriceListCalculated;
    vector<string> wishItemNameList, wishItemDescriptionList;
    vector<ItemToPurchase> wishItems;
    string customerName, currentDate, wishItemRemoval, userInputWishItemName,
           userInputCustomerName, userInputDate, userInputWishItemDescription;
    float userInputWishItemPrice;
    int userInputWishItemQuantity, taxRounded;

public:
    Wishlist();
    Wishlist(string, string);
    void SetCustomerName(string);
    string GetCustomerName();
    void SetDate(string);
    string GetDate();

    void AddItem(ItemToPurchase);
    void RemoveItem(string);
    void ModifyItem();
    int GetNumItemsInWish();
    int GetCostOfWish();
    void PrintTotal();
    void PrintDescriptions();
    void ShippingOptions(int);
};

#endif
