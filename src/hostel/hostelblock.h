
#ifndef HOSTELBLOCK_H
#define HOSTELBLOCK_H

#include "room.h"
#include <string>
#include <iostream>
using namespace std;
class HostelBlock
{
private:
    string blockName;
    Room rooms[10];      // array of Room OBJECTS (pointer nahi!) ,if hostel destroy rooms automatically destroy
    int roomCount;

public:
    HostelBlock(string name);

    void addRoom(Room room);
    void displayAllRooms() const;

    string getBlockName() const;
    int getRoomCount() const;
};

#endif // HOSTELBLOCK_H