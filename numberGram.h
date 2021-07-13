//
// Created by timni on 7/13/2021.
//

#ifndef INVENTORY_NUMBERGRAM_H
#define INVENTORY_NUMBERGRAM_H

#include "Items.h"

class numberGram : public Category, public Items{
public:
    numberGram();
};

numberGram::numberGram() {
    this->setGramNumberItem(0);
}

#endif //INVENTORY_NUMBERGRAM_H
