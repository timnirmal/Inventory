//
// Created by timni on 7/10/2021.
//

#ifndef INVENTORY_SUPPLY_H
#define INVENTORY_SUPPLY_H
#include <iostream>

using namespace std;

//In here stock is creted in order to add to Inventory later
//So stock and Inventory considered separately.

class Supply {
private:
    int itemID;
    string itemName;
    float quantity;
    bool gramNumberItem;    //Gram = 0
    string DateArrival;
    bool status;

    static int countSup;

public:
    Supply();
    void setItem();
    void setItemID();
    void setQuantity();
    void setGramNumberItem(bool);

    void getItem();
    void getItemID();
    void getQuantity();
    void getGramNumberItem();
};


#endif //INVENTORY_SUPPLY_H
