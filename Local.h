//
// Created by timni on 7/10/2021.
//

#ifndef INVENTORY_LOCAL_H
#define INVENTORY_LOCAL_H
#include <iostream>
#include "Supply.h"

using namespace std;

class Local : public Supply{
private:
    string nameOrigin;
    string dateDep;
    int regNumberVehicle;
public:
    Local();

    void setNameOrigin(string name);
    void setDateDep(string date);
    void setRegNumberVehicle(int id);

    string getNameOrigin();
    string getDateDep();
    int getRegNumberVehicle();

};


#endif //INVENTORY_LOCAL_H

/*
- nameOrigin : string
- dateDep : string
- regNumberVehicle : string

- vehicleId : int
- vehicleType : string
- regNumberVehicle : string
*/

