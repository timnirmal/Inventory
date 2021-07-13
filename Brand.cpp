//
// Created by timni on 7/10/2021.
//

#include "Brand.h"

void Brand::setBrandId(int val) {
    brandID = val;
}

void Brand::setBrandName(string name) {
    brandName = name;
}

void Brand::setLocalImported(bool bval) {
    local_imported = bval;
}

void Brand::setPromtionBrand(int val) {
    promotionBrand = val;
}

int Brand::getBrandId() {
    return brandID;
}

string Brand::getBrandName() {
    return brandName;
}

bool Brand::getLocalImported() {
    return local_imported;
}

int Brand::getPromtionBrand() {
    return promotionBrand;
}
