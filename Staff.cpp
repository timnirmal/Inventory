//
// Created by timni on 7/10/2021.
//

#include "Staff.h"

Staff::Staff() {
    userId = ++countStaff;
    cout<<"\n\nIm Staff\n";
    cout<<"UID "<<userId<<endl;
}

int Staff::getUserID() {
    return userId;
}

void Staff::setUserName(string name) {
    userName=name;
}

string Staff::getUserName() {
return userName;
}
