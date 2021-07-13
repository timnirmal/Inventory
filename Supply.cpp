//
// Created by timni on 7/10/2021.
//

#include "Supply.h"

Supply::Supply() {
    itemID = ++countSup;
    itemName = "Item Name";
    quantity = 0;
}

void Supply::setItemName(string name) {
    itemName = name;
}

void Supply::setQuantity(float val) {
    quantity = val;
}

void Supply::setGramNumberItem(bool bval) {
    gramNumberItem = bval;
}

void Supply::setDateArrival(string date) {
    DateArrival = date;
}

void Supply::setStatus(bool bstat) {
    status = bstat;
}

int Supply::getItemID() {
    return itemID;
}

string Supply::getItemName() {
    return itemName;
}

float Supply::getQuantity() {
    return quantity;
}

bool Supply::getGramNumberItem() {
    return gramNumberItem;
}

string Supply::getDateArrival() {
    return DateArrival;
}

bool Supply::getStatus() {
    return status;
}
