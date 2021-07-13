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
    void setBrandId(int val);
    void setBrandName(string name);
    void setLocalImported(bool bval);
    void setPromtionBrand(int val);

    int getBrandId();
    string getBrandName();
    bool getLocalImported();
    int getPromtionBrand();
};


#endif //INVENTORY_BRAND_H

/*
- brandID : int
- brandName : string
- local_imported : bool
- promotionBrand : int
 */