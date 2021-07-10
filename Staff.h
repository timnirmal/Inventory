

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

    void setUserID();
    void setUserName(string name);
    void setPassword();
    void setPosition();
    void setDateJoined();

    int getUserID();
    string getUserName();
    void getPassword();
    void getPosition();
    void getDateJoined();
};


#endif //INVENTORY_STAFF_H
