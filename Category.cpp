//
// Created by timni on 7/10/2021.
//

#include "Category.h"

Category::Category() {
    categoryID = 0;
}

void Category::setCategoryId(int val) {
    categoryID = val;
}

void Category::setCategoryName(string name) {
    categoryName = name;
}

void Category::setPromotionCat(int val) {
    promotionCat = val;
}

int Category::getCategoryId() {
    return categoryID;
}

string Category::getCategoryName() {
    return categoryName;
}

int Category::getPromotionCat() {
    return promotionCat;
}



