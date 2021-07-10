#include <iostream>
#include "string"
#include "Items.h"
#include "Category.h"
#include "Brand.h"
#include "Supply.h"
#include "international.h"
#include "Local.h"
#include "Staff.h"

using namespace std;

enum category_list{Produce,Meat_Seafood,Grains,Bakery,Frozen,Dairy,Snacks_Sweets,Beverages,Health_Beauty,Condiments_Spices};
//Produce - 0,Meat_Seafood - 1,
//Grains - 2,
//Bakery - 3,Frozen - 4,Dairy - 5, Snacks_Sweets - 6,Beverages - 7,Health_Beauty - 8,Condiments_Spices - 9


/////================================== INVENTORY ========================================

class numberGram : public Items, public Category{
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

int Staff::countStaff=-1;
int Supply::countSup=-1;
int Items::count=-1;

int main() {
    //login

    numberGram Produce;
    Produce.getGramNumberItem();
    numberGram Meat_Seafood;
    Meat_Seafood.getGramNumberItem();

    numberGramBrand Grains;

    Grains.getGramNumberItem();

    cout<<endl<<"Grams Ends here\n\n";

    numberItemBrand Bakery;
    cout<<"\nIts bakery\n";
    Bakery.getGramNumberItem();
    cout<<"\nIts bakery\n";
    numberItemBrand Frozen;
    numberItemBrand Dairy;
    numberItemBrand Snacks_Sweets;
    numberItemBrand Beverages;
    numberItemBrand Health_Beauty;
    numberItemBrand Condiments_Spices;


    Items t;
    t.printObjNumber();
    Items::printObjCount();
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