//
// Created by timni on 7/10/2021.
//

#ifndef INVENTORY_CATEGORY_H
#define INVENTORY_CATEGORY_H

#include <iostream>
#include "Items.h"

using namespace std;

class Category{
private:
    int categoryID;
    string categoryName;
    int promotionCat;

public:
    //friend class Items;
    Category();
    void setCategoryId(int val);
    void setCategoryName(string name);
    void setPromotionCat(int val);

    int getCategoryId();
    string getCategoryName();
    int getPromotionCat();
};


#endif //INVENTORY_CATEGORY_H

