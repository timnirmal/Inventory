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
    bool status;    // Not approved = 0

    static int countSup;

public:
    Supply();
    void setItemID();
    void setItemName(string name);
    void setGramNumberItem(bool bval);
    void setDateArrival(string date);
    void setStatus(bool bstat);

    int getItemID();
    string getItemName();
    float getQuantity();
    bool getGramNumberItem();
    string getDateArrival();
    bool getStatus();

    void setQuantity(float val);
};


#endif //INVENTORY_SUPPLY_H
