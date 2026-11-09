#include "Inventory.h"
#include "Item.h"
#include <iostream>
 
bool Inventory::addItem(Item i) {

    if(this->numOfItems >= this->arraySize){
        Item ** bigger = new Item*[arraySize * 2];

        for(int x = 0; x < arraySize; x++){
            bigger[x] = this->items[x];
        }

        delete[] items;
        this->items = bigger;

        this->arraySize = this->arraySize * 2;
    }
    this->items[this->numOfItems] = i;
    this->numOfItems += 1;
}

bool Inventory::removeItem(char id) {
    bool deleted = false;
    for(int x = 0; x < numOfItems; x++){
        if(this->items[numOfItems]->getId() == id){
            delete this->items[numOfItems];
            this->numOfItems -= 1;
        }
        if(deleted == true){
            this->items[x - 1] = this->items[x];
            this->items[x] =  nullptr;
            numOfItems -= 1;
        }
    }
    return deleted;
}

bool Inventory::hasItem(char id){

}
        
Inventory::Inventory(){
    this->arraySize = 2;
    this->numOfItems = 0;
    this->items = new Item*[arraySize];

    
}
        
Inventory::~Inventory(){
    for(int x = 0; x < numOfItems; x++){
        delete[] this->items;
    }
}

