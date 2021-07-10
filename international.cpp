//
// Created by timni on 7/10/2021.
//

#include "international.h"

international::international() {

}

void international::setCountryOrigin(string country) {
countryOrigin = country;
}

void international::setDateArrHarbour(string date) {
dateArrHarbour = date;
}

void international::setShipID(int id) {
shipId = id;
}

string international::getCountryOrigin() {
    return countryOrigin;
}

string international::getDateArrHarbour() {
    return dateArrHarbour;
}

int international::getShipID() {
    return shipId;
}
