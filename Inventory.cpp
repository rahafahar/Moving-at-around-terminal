#include "Inventory.h"
 
bool Inventory::addItem(Item item) {
    if(this->numOfItems >= this->arraySize){

    }
    this->items[this->numOfItems] = item;
    this->numOfItems += 1;
}

bool Inventory::removeItem(string id) {
    this->numOfItems -= 1;
}

bool Inventory::hasItem(string id){

}
        
Inventory::Inventory(){
    this->arraySize = 2;
    this->numOfItems = 0;
    this->items = new Item[arraySize];
}
        
Inventory::~Inventory(){
    delete[] this->items;
}