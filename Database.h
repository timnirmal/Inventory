//
// Created by timni on 7/13/2021.
//

#ifndef INVENTORY_DATABASE_H
#define INVENTORY_DATABASE_H


class Database {
public:

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

//Supply
    vector<international> internationalSupply;
    vector<Local> localSupply;

};


#endif //INVENTORY_DATABASE_H
