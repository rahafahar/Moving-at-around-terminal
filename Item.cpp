

#include "Item.h"

Item::Item(char id, string name){
    this->id = id;
    this->name = name;
}

char Item::getId() {
    return this->id;
}

string Item::getName() {
    return this->name;
}

void Item::setId(char id) {
    this->id = id;
}

void Item::setName(string name) {
    this->name = name;

}

string Item::getNameFromId(char id) {

    if(id = 'k'){
        return "key";
    } else{
        return "not key"; //come back to this
    }
}
