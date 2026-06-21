#include "hostelblock.h"

HostelBlock::HostelBlock(string name)
{
    blockName = name;
    roomCount = 0;
}

void HostelBlock::addRoom(Room room)//yaha Room room parameter ha jab room is fun() ko bajay gay to poory copy bun gai gy
{
    if (roomCount < 10)
    {
        rooms[roomCount] = room;//us line ki copy ko array ma store kr rhi ha ,here default constructor
        roomCount++;
    }
    else
    {
        cout << "Block is full. Cannot add more rooms." << endl;
    }
}

void HostelBlock::displayAllRooms() const
{
    cout << "===== Block: " << blockName << " =====" << endl;
    for (int i = 0; i < roomCount; i++)
    {
        rooms[i].displayInfo();//normal object
        cout << endl;
    }
}

string HostelBlock::getBlockName() const
{
    return blockName;
}

int HostelBlock::getRoomCount() const
{
    return roomCount;
}