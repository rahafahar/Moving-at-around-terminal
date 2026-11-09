
#ifndef ITEM_H
#define ITEM_H
#include "Item.h"

using namespace std;

class Inventory {

    private:
        Item ** items; //= new Item*[2];
        int numOfItems;
        int arraySize;

    public:
        bool addItem(Item i);
        bool removeItem(char id);
        bool hasItem(char id);
        Inventory();
        ~Inventory();

};
#endif