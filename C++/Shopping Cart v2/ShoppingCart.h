using namespace std;

#ifndef SHOPPINGCART_H
#define SHOPPINGCART_H

class ShoppingCart
{
    ItemToPurchase inputItems;

private:
    vector<int> cartItemQuantityList;
    vector<float> cartItemPriceList, cartItemPriceListCalculated;
    string customerName, currentDate, cartItemRemoval;
    vector<ItemToPurchase> cartItems;
    vector<string> cartItemNameList, cartItemDescriptionList;
    string userInputCartItemName, userInputCustomerName, userInputDate, userInputCartItemDescription;
    float userInputCartItemPrice;
    int userInputCartItemQuantity;

public:
    ShoppingCart();
    ShoppingCart(string, string);
    void SetCustomerName(string);
    string GetCustomerName();
    void SetDate(string);
    string GetDate();

    void AddItem(ItemToPurchase);
    void RemoveItem(string);
    void ModifyItem();
    int GetNumItemsInCart();
    int GetCostOfCart();
    void PrintTotal();
    void PrintDescriptions();
};

#endif
