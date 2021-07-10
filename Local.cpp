//
// Created by timni on 7/10/2021.
//

#include "Local.h"

Local::Local() {

}

void Local::setNameOrigin(string name) {
nameOrigin = name;
}

void Local::setDateDep(string date) {
dateDep = date;
}

void Local::setVehicleID(int id) {
vehicleId = id;
}

string Local::getNameOrigin() {
    return nameOrigin;
}

string Local::getDateDep() {
    return dateDep;
}

int Local::getVehicleID() {
    return vehicleId;
}
