//
// Created by timni on 7/10/2021.
//

#ifndef INVENTORY_BRAND_H
#define INVENTORY_BRAND_H
#include <iostream>

using namespace std;

class Brand {
private:
    int brandID;
    string brandName;
    bool local_imported; //0 for local
    int promotionBrand;
public:
    void setBrandId();
    void setBrandName();
    void setLocalImported();
    void setPromtionBrand();

    void getBrandId();
    void getBrandName();
    void getLocalImported();
    void getPromtionBrand();
};


#endif //INVENTORY_BRAND_H
