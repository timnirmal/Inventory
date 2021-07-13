//
// Created by timni on 7/3/2021.
//

#ifndef INVENTORY_ITEMS_H
#define INVENTORY_ITEMS_H

#include <iostream>
#include "Category.h"

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
    int tempCategoryID;
    static int count;

public:
    //friend class Category;
    Items();

    void setItemID(int val);
    void setItemName(string name);
    void setQuantity(int val);
    void setGramNumberItem(bool val);
    void setRetailsPrice(int val);
    void setDiscounts(int val);
    void setPromotionsItem(int val);
    void setFinalPrice(int val);
    void setTempCategoryId(int val);


    int getItemID();
    string getItemName();
    int getQuantity();
    bool getGramNumberItem();
    double getRetailsPrice();
    int getDiscounts();
    int getPromotionsItem();
    double getFinalPrice();
    int getTempCategoryId();

    void setItem();
};


#endif //INVENTORY_ITEMS_H

/*
 *
- itemID : int
- itemName : string
- quantity; : float
- gramNumberItem : bool
- retailsPrice : double
- discounts : int
- promotionsItem : int
- finalPrice : double
- categoryID : int
- count : int

+ setItemID(int val) : int
+ setItemName(string name) : string
+ setQuantity(int val) : int
+ setGramNumberItem(bool val) : bool
+ setRetailsPrice(int val) : int
+ setDiscounts(int val) : int
+ setPromotionsItem(int val) : int
+ setFinalPrice(int val) : int
+ setCategoryId(int val) : int

+ getItemID(): int
+ getItemName(): string
+ getQuantity(): int
+ getGramNumberItem(): bool
+ getRetailsPrice(): int
+ getDiscounts(): int
+ getPromotionsItem(): int
+ getFinalPrice(): int
+ getCategoryId(): int

 */