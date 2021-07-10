//
// Created by timni on 7/10/2021.
//

#ifndef INVENTORY_INTERNATIONAL_H
#define INVENTORY_INTERNATIONAL_H

#include <iostream>
#include "Supply.h"

using namespace std;

class international : public Supply {
private:
    string countryOrigin;
    string dateArrHarbour;
    int shipId;

public:
    international();

    void setCountryOrigin(string country);
    void setDateArrHarbour(string date);
    void setShipID(int id);

    string getCountryOrigin();
    string getDateArrHarbour();
    int getShipID();

};


#endif //INVENTORY_INTERNATIONAL_H
