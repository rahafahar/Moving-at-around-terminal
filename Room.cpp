#include "Room.h"
#include <iostream>

using namespace std;

Room::Room(int x, int y){

    this->width = x;
    this->height = y;

    this->map = char[x][y];

    for(int outerCounter; outerCounter < y; outerCounter++){
        
        for(int innerCounter; innerCounter < x; innerCounter++){

        if(outerCounter == 0 || outerCounter == (y-1) || innerCounter == 0 || innerCounter == (x-1) )
        }
    }
}

Room::~Room() {

}

Room::void draw() {

}