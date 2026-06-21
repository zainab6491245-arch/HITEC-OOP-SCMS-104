#include "hostelmanager.h"

HostelManager::HostelManager(string blockName)
{
    block = new HostelBlock(blockName);
}

HostelManager::~HostelManager()
{
    delete block;
    cout << "HostelManager destructor called. Block cleaned up." << endl;
}
void HostelManager::allocateRoom() // new room object bnata ha or us ko block ma add krta ha
{
    Room newRoom(101, "Double", 1);
    block->addRoom(newRoom);
    cout << "Room allocated successfully in block: " << block->getBlockName() << endl;
}
void HostelManager::vacateRoom()//allocate or vaccate are under accomodation 
{
    cout << "Room vacated in block: " << block->getBlockName() << endl;
}
void HostelManager::generateReport() const //reportable interface
{
    cout << "===== Hostel Occupancy Report =====" << endl;
    cout << "Block Name: " << block->getBlockName() << endl;
    cout << "Total Rooms: " << block->getRoomCount() << endl;
    block->displayAllRooms();
}
HostelBlock* HostelManager::getBlock() const
{
    return block;
}