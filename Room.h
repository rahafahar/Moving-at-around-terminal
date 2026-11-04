 #ifndef ROOM_H
 #define ROOM_H

//#include "Player.h"

class Room(){
    private:
        Player * player;
        char ** map;

    public:
        Room(int x, int y); //allocates map
        ~Room();    // deallocates map
        void draw();
 

};

#endif