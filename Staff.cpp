//
// Created by timni on 7/10/2021.
//

#include "Staff.h"

Staff::Staff() {
    cout << "IN class : " << getPosition() << endl;
    userId = ++countStaff;
    cout << "\n\nIm Staff\n";
    cout << "UID " << userId << endl;
}

Staff::Staff(int positionID) {
    switch (positionID) {
        case 0:
            setPosition("Owner");
        case 1:
            setPosition("Manager");
        case 2:
            setPosition("Floor Worker");
        case 3:
            setPosition("Cashier");
    }

    userId = (++countStaff * 10) + positionID;
    cout << "\n\nIm Staff\n";
    cout << "UID " << userId << endl;
}

int Staff::getUserID() {
    return userId;
}

void Staff::setUserName(string name) {
    userName = name;
}

string Staff::getUserName() {
    return userName;
}

void Staff::setPassword(string pass) {
    password = pass;
}

void Staff::setPosition(string pos) {
    Position = pos;
}

void Staff::setDateJoined(string date) {
    dateJoined = date;
}

string Staff::getPassword() {
    return password;
}

string Staff::getPosition() {
    return Position;
}

string Staff::getDateJoined() {
    return dateJoined;
}

void Staff::setUserID(int val) {
    userId = val;
}
