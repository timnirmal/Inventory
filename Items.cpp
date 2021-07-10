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

void Items::setItemID(int val) {
itemID =val;
}

void Items::setItemName(string name) {
itemName=name;
}

void Items::setQuantity(int val) {
quantity = val;
}

void Items::setRetailsPrice(int val) {
retailsPrice = val;
}

void Items::setDiscounts(int val) {
discounts = val;
}

void Items::setPromotionsItem(int val) {
promotionsItem = val;
}

void Items::setFinalPrice(int val) {
finalPrice = val;
}

void Items::setCategoryId(int val) {
categoryID = val;
}

int Items::getItemID() {
    return itemID;
}

string Items::getItemName() {
    return itemName;
}

int Items::getQuantity() {
    return quantity;
}

int Items::getRetailsPrice() {
    return retailsPrice;
}

int Items::getDiscounts() {
    return discounts;
}

int Items::getPromotionsItem() {
    return promotionsItem;
}

int Items::getFinalPrice() {
    return finalPrice;
}

int Items::getCategoryId() {
    return categoryID;
}

bool Items::getGramNumberItem() {
    return gramNumberItem;
}

