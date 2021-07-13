

#ifndef INVENTORY_STAFF_H
#define INVENTORY_STAFF_H
#include <iostream>

using namespace std;

class Staff {
private:
    int userId;
    string userName;
    string password;
    string Position;
    string dateJoined;

    static int countStaff;
public:
    Staff();
    Staff(int positionID);

    void setUserID(int val);
    void setUserName(string name);
    void setPassword(string pass);
    void setPosition(string pos);
    void setDateJoined(string date);

    int getUserID();
    string getUserName();
    string getPassword();
    string getPosition();
    string getDateJoined();
};


#endif //INVENTORY_STAFF_H

/*
 userId : int
- userName : string
- password : string
- Position : string
- dateJoined : string
- countStaff : int
 */