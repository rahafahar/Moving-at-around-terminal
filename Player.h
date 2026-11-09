#ifndef PLAYER_H
#define PLAYER_H

class Room;
class Inventory;

class Player{
    private:
        void getItem(Room * r, int x, int y);
        Inventory inventory;
        int x;
        int y;
        

    public:
        Player();
        ~Player();
        int getX();
        int getY();
        bool move(char direction, Room * room);

};

#endif