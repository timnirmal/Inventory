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
    void setItem();
    void setItemID();
    void setQuantity();
    void setGramNumberItem(bool);
    void setRetailsPrice();
    void setDiscounts();
    void setPromotionsItem();
    void setFinalPrice();
    void setCategoryId();


    void getItem();
    void getItemID();
    void getQuantity();
    void getGramNumberItem();
    void getRetailsPrice();
    void getDiscounts();
    void getPromotionsItem();
    void getFinalPrice();
    void getCategoryId();

    void printObjNumber(void)
    {
        cout << "object number :" << itemID << "\n";
    }
    static void printObjCount(void)
    {
        cout << "count:" << count<< "\n";
    }
};


#endif //INVENTORY_ITEMS_H
