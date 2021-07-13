#include <iostream>
#include "string"
#include "Items.h"
#include "Category.h"
#include "Brand.h"
#include "Supply.h"
#include "international.h"
#include "Local.h"
#include "Staff.h"
#include "Supply.h"
#include <vector>

using namespace std;

//enum category_list{Produce,Meat_Seafood,Grains,Bakery,Frozen,Dairy,Snacks_Sweets,Beverages,Health_Beauty,Condiments_Spices};
//Produce - 0,Meat_Seafood - 1,
//Grains - 2,
//Bakery - 3,Frozen - 4,Dairy - 5, Snacks_Sweets - 6,Beverages - 7,Health_Beauty - 8,Condiments_Spices - 9
enum roles {owner_role, manager_role, worker_role, cashier_role};

int role = 0;

/////================================== INVENTORY ========================================

class numberGram : public Category, public Items{
public:
    numberGram();
};

numberGram::numberGram() {
    this->setGramNumberItem(0);
}


class numberGramBrand : public numberGram, public Brand{

};

class numberItemBrand : public Items, public Category, public Brand{
public:
    numberItemBrand();
};

numberItemBrand::numberItemBrand()  {
    this->setGramNumberItem(1);
}

/////================================== STAFF ========================================

class FloorWorker : virtual public Staff {
public:
    FloorWorker();
};

FloorWorker::FloorWorker() {
    setPosition("Floor Worker");
    //positionID = 2;
    if(getUserID()!= 0)
        setUserID((getUserID()*10) + 2);
}

class Cashier : virtual public Staff {
public:
    Cashier();
};

Cashier::Cashier() {
    setPosition("Cashier");
    //positionID = 3;
    if (getUserID() != 0)
        setUserID((getUserID() * 10) + 3);
}

class Manager : public FloorWorker, public Cashier {
public:
    Manager();
};

Manager::Manager() {
    setPosition("Manager");
    //positionID = 1;
    if(getUserID()!= 0)
        setUserID((getUserID() * 10) + 1);
}

class Owner : public Manager {
public:
    Owner();

};

Owner::Owner() {
    setPosition("Owner");
}

/////================================== Main ========================================

int Staff::countStaff=-1;
int Supply::countSup=-1;
int Items::count=-1;

//10 Vectors for Store items.
vector<numberGram> Produce;
vector<numberGram> Meat_Seafood;
vector<numberGramBrand> Grains;
vector<numberItemBrand> Bakery;
vector<numberItemBrand> Frozen;
vector<numberItemBrand> Dairy;
vector<numberItemBrand> Snacks_Sweets;
vector<numberItemBrand> Beverages;
vector<numberItemBrand> Health_Beauty;
vector<numberItemBrand> Condiments_Spices;

//Staff 4
Owner owner;    //id = 0
vector<Manager> manager;
vector<FloorWorker> worker;
vector<Cashier> cashier;

void makeItem(){
    /////================ vector<numberGram> Produce;
    //vector<numberGram> Meat_Seafood;
    //vector<numberGramBrand> Grains;
    //vector<numberItemBrand> Bakery;
    //Example of adding items to category vector
    for(int i=0; i<1;i++){
        numberGram rice;
        rice.setCategoryId(1);
        rice.setItemName("Rice");
        rice.setQuantity(10);
        rice.setRetailsPrice(120);
        rice.setDiscounts(5);
        rice.setFinalPrice(110);
        Produce.push_back(rice);
    }
    for(int i=0; i<1;i++){
        numberGramBrand Munata;
        Munata.setCategoryId(3);
        Munata.setItemName("Mun Ata");
        Munata.setQuantity(20);
        Munata.setRetailsPrice(250);
        Munata.setDiscounts(10);
        Munata.setFinalPrice(210);
        Munata.setBrandName("Samaposha");
        Grains.push_back(Munata);
    }
    for(int i=0; i<1;i++){
        numberItemBrand lux;
        lux.setCategoryId(8);
        lux.setItemName("LUX");
        lux.setQuantity(50);
        lux.setRetailsPrice(50);
        lux.setPromotionsItem(5);
        lux.setFinalPrice(45);

        Health_Beauty.push_back(lux);
    }
    cout<<Produce[0].getItemID()<<endl;
    cout<<Grains[0].getItemID()<<endl;
    cout<<Health_Beauty[0].getItemID()<<endl;
}

void makeStaff(){
    owner.setUserName("Janaka");
    owner.setPassword("1234");
    owner.setDateJoined("2018");

    for(int i=0; i<1;i++){
        Manager staff;
        staff.setUserName("Janaka");
        staff.setPassword("1234");
        staff.setDateJoined("2018");
        manager.push_back(staff);
    }
    /*
    cout << endl << endl << owner.getPosition() << endl;
    cout << owner.getUserID() << endl;
*/
    for(int i =0; i<manager.size();i++) {
        cout << endl << endl << manager[i].getPosition() << endl;
        cout << manager[i].getUserID() << endl;
    }

    for(int i=0; i<1;i++){
        Cashier staff;
        cashier.push_back(staff);
    }

    for(int i =0; i<cashier.size();i++) {
        cout << endl << endl << cashier[i].getPosition() << endl;
        cout << cashier[i].getUserID() << endl;
    }

    for(int i=0; i<1;i++){
        FloorWorker staff;
        worker.push_back(staff);
    }

    for(int i =0; i<worker.size();i++) {
        cout << endl << worker[i].getPosition() << endl;
        cout << worker[i].getUserID() << endl;
    }

}

int main() {
    //login

    ////================================= Items ===============

    makeItem();
/*
    cout<<endl<<Produce[0].getCategoryId();
    cout<<endl<<Produce[0].getItemName();
    cout<<endl<<Produce[0].getQuantity();
    cout<<endl<<Produce[0].getRetailsPrice();
    cout<<endl<<Produce[0].getDiscounts();
    cout<<endl<<Produce[0].getFinalPrice();
    cout<<endl<<Produce[1].getItemID();
    cout<<endl<<endl;

    numberGram lux;
    cout<<lux.getItemID()<<endl;
*/
    /*
    numberGram Produce;
    numberGram Meat_Seafood;
    cout<<Meat_Seafood.getItemID()<<endl;

    numberGramBrand Grains;

    cout<<Grains.getItemID()<<endl;

    cout<<endl<<"Grams Ends here\n\n";

    numberItemBrand Bakery;
    cout<<"\nIts bakery\n";
    cout<<Bakery.getItemID();
    cout<<"\nIts bakery\n";
    numberItemBrand Frozen;
    numberItemBrand Dairy;
    numberItemBrand Snacks_Sweets;
    numberItemBrand Beverages;
    numberItemBrand Health_Beauty;
    numberItemBrand Condiments_Spices;
    */

    cout<<"Gonig to staff";
    ////================================= Staff ===============
    /*Owner owner;    //id = 0
    //Using Predefined 2 managers ,  5 cashier, 10 floor workers
    //Manager manager[2];
    //Cashier cashier[5];
    //FloorWorker worker[10];

    vector<Manager> manager;
    vector<FloorWorker> worker;
    vector<Cashier> cashier;*/

    makeStaff();

    /*
    cout<<"This =================== "<<manager[0].getUserID()<<endl;
    cout<<"This =================== "<<manager[1].getUserID()<<endl;
    cout<<"This =================== "<<worker[0].getUserID()<<endl;

    cout<<"Try flooe worker";
    FloorWorker jaye;
    jaye.setUserName("Jaye");
    cout<<"UID "<<jaye.getUserID()<<endl;
    cout<<"Owner is "<< jaye.getUserName();
*/

    ////================================= Supply ===============
    /*international lol;
    Local lo;
    lo.setItemName("Lux");
    lo.setNameOrigin("gedara");

    cout<<endl;

    cout<<lo.getItemName(); cout<<endl;
    cout<<lo.getNameOrigin()<<"  "<<lo.getItemID() <<"\n int  "<<lol.getItemID();*/

    vector<international> internationalSupply;
    vector<Local> localSupply;

    cout<<"Local Supply"<<endl;
    for(int i=0; i<2;i++){
        Local lux;
        localSupply.push_back(lux);
    }

    cout<<endl<<localSupply[0].getItemID()<<endl;
    cout<<endl<<localSupply[1].getItemID()<<endl;

    cout<<"International Supply"<<endl;
    for(int i=0; i<2;i++){
        international lux;
        internationalSupply.push_back(lux);
    }

    cout<<endl<<internationalSupply[0].getItemID()<<endl;
    cout<<endl<<internationalSupply[1].getItemID()<<endl;


    owner.setPassword("1234");




    //Programme Starts Here

    //Login
    int UID;
    string Password;
    int position_cal;

    cout<<cashier[1].getUserID()-(cashier[1].getUserID()/10)*10<<endl;
    cout<<worker[1].getUserID()-(worker[1].getUserID()/10)*10<<endl;

    cout << "=========== LOGIN SCREEN ===================\n\n";
    cout<< "Enter User ID : ";
    cin>>UID;
    cout<< "Password : ";
    cin>> Password;

    switch (UID) {
        case 0:
            //Owner
            if(owner.getUserID() == UID && owner.getPassword() == Password){
                cout<<"Welcome "<< owner.getUserName()<<"..."<<endl<<"You are Logged as Admin";
                role = 0;
            }
            else {
                cout<<"Wrong user name or password.";
                break;
            }
            break;
        case 1:
            //Manager
            for (auto & i : manager){
                if(i.getUserID() == UID && i.getPassword() == Password){
                    cout<<"Welcome "<< i.getUserName()<<"..."<<endl<<"You are Logged as Manager";
                    role = 1;
                }
                else {
                    cout<<"Wrong user name or password.";
                    break;
                }
            }
            break;
        case 2:
            //Floor Worker
            for (auto & i : worker){
                if(i.getUserID() == UID && i.getPassword() == Password){
                    cout<<"Welcome "<< i.getUserName()<<"..."<<endl<<"You are Logged as Floor Worker";
                    role = 2;
                }
                else {
                    cout<<"Wrong user name or password.";
                    break;
                }
            }
            break;
        case 3:
            //Cashier
            for (auto & i : cashier){
                if(i.getUserID() == UID && i.getPassword() == Password){
                    cout<<"Welcome "<< i.getUserName()<<"..."<<endl<<"You are Logged as Cashier";
                    role = 3;
                }
                else {
                    cout<<"Wrong user name or password.";
                    break;
                }
            }
            break;
        default:
            cout<<"Your input is wrong";
            return 0;
    }

    cout<<endl<<"Out"<<endl;

    if (role == 0){
        cout<<endl<<"Hey owner";
    }


    return 0;
}

/*After a meeting with the client, the following requirements have been roughly identified:

Stock

The details of Items include the

name of each item
how many of each item are in stock
retail price
any discounts/promotions (Recorded in %)
the final price after any discounts (Final price calculated by deducting the discount percentage from the retail price of the eligible Items.)

Items in the inventory can be broken down into 10 major categories.
Grams
Produce (fruits & vegetables)
Meat & Seafood
Grains (rice, dhal etc.)
Number of item in stock
Bakery products
Frozen foods
Dairy products
Snacks and Sweets
Beverages
Health & Beauty (toothpaste, shampoo etc.)
Condiments & Spices

All item categories except the two fresh categories (Produce and Meat & seafood) must also record the,
brand of the product
local or imported product

Promotions are special discounts that can apply to
single item
brand of item
category of item



Staff

The inventory system will be managed by the staff of the supermarket chain and the amount of control over the system will be decided by the position of the staff member.
So,
Permission Role should assigned

Each staff member has a
Username
password
that must be entered in order to access the inventory system.

Full name
Position (Floor worker)
Join date
of all staff members must be recorded.

The lowest tier member of staff is the floor worker.
The floor workers are responsible for
stocking up the Items
So they can Increase the number of stock of an existing product in the inventory

Next are the cashiers, who are responsible for
All transactions with the customers
Have the ability to reduce the stock of the relevant Items after a successful transaction with a customer.

The transactions must be recorded separately, with
Name of the cashier
Customer
List of all the Items bought

The managers can
add or remove Items from the inventory
View details of other staff members
able to perform all the actions of the cashiers and floor workers.

The owner
Able to add or remove staff members
Able to perform all other actions listed above
(There can be only one owner account. )

Supply

Finally, the details of the supply chain that brings stock into the inventory must be recorded. The supply to the supermarket comes from both local and international sources.

Local supply
Transported from various farms and factories throughout the island and in three types of vehicles,
large trucks
small trucks
vans

Each vehicle can only transport one type of goods at a time
Identified by their vehicle registration number.

Each local supply shipment must include,
Name of the Items
Quantity
Name of origin
Name of the farm/factory
Date of departure (from the farm or factory)
Date of arrival at the supermarket
The vehicle used for the transportation (ID)

International supply shipments will only be imported overseas by ship and should include,
Country of origin
Ship number
Date it arrived at the local harbor
Date it was transported to the store

All supply shipments will be given,
Pending status until a staff member inspects the Items and adds them to the stock.
A floor worker is able to approve and add stock of an existing item in the inventory.

If the received item does not yet have an entry in the inventory,
a manager or the owner is required to first make a new entry for the item in the inventory before adding the stock.

Once the stock has been successfully added to the inventory, the status of the supply shipment must be changed to “approved”.

*/


//By default category set to 0 which is fresh food
//In here 3 derived classes used as store/ Inventory

//ItemID is defined by itemcount * 10 + categoryID
//Since at the begining there is no CategoryID or connection between them tempCatid created and set to 0

//Manager have suffix 231, cashier 3, floor worker 2, owner 0