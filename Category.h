//
// Created by timni on 7/10/2021.
//

#ifndef INVENTORY_CATEGORY_H
#define INVENTORY_CATEGORY_H

#include <iostream>

using namespace std;

class Category{
private:
    int brandID;
    string brandName;
    int promotionCat;
public:
    void setBrandId();
    void setBrandName();
    void setPromotionCat();

    void getBrandId();
    void getBrandName();
    void getPromotionCat();
};


#endif //INVENTORY_CATEGORY_H
