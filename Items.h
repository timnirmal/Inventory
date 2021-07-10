//
// Created by timni on 7/3/2021.
//

#ifndef INVENTORY_ITEMS_H
#define INVENTORY_ITEMS_H

#include <iostream>

using namespace std;

class Items {
private:
    int itemID;
    string itemName;
    float quantity;
    bool gramNumberItem;    //Gram = 0
    double retailsPrice;
    int discounts;
    int promotionsItem;
    double finalPrice;
    int categoryID;
    static int count;
public:
    Items();
    void setItemID(int val);
    void setItemName(string name);
    void setQuantity(int val);
    void setGramNumberItem(bool val);
    void setRetailsPrice(int val);
    void setDiscounts(int val);
    void setPromotionsItem(int val);
    void setFinalPrice(int val);
    void setCategoryId(int val);


    int getItemID();
    string getItemName();
    int getQuantity();
    bool getGramNumberItem();
    int getRetailsPrice();
    int getDiscounts();
    int getPromotionsItem();
    int getFinalPrice();
    int getCategoryId();

    void setItem();
};


#endif //INVENTORY_ITEMS_H
