#include "Inventory.h"
 /*
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
    this->numOfItems -= 1;
}

bool Inventory::hasItem(char id){

}
        
Inventory::Inventory(){
    this->arraySize = 2;
    this->numOfItems = 0;
    this->items = new Item*[arraySize];

    
}
        
Inventory::~Inventory(){
    delete[] this->items;
}

*/