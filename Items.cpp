//
// Created by timni on 7/3/2021.
//

#include "Items.h"

void Items::setItem() {
    itemID =0;
    itemName = "Item Name";
    quantity = 0;
    retailsPrice = 0;
    discounts = 0;
    promotionsItem = 0;
    finalPrice = 0;
}

Items::Items() {
    itemID = ++count;
    itemName = "Item Name";
    quantity = 0;
    retailsPrice = 0;
    discounts = 0;
    promotionsItem = 0;
    finalPrice = 0;
}

void Items::setGramNumberItem(bool val) {
    gramNumberItem = val;
}

void Items::getGramNumberItem() {
    cout<<"\nNumber gram  "<<gramNumberItem<<endl;
}
