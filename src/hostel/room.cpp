#include "room.h"

Room::Room(int n, string roomT, int flr)
{
    roomNumber = n;
    type = roomT;
    floor = flr;
    occupantCount = 0;

    for (int i = 0; i < 3; i++)
    {
        occupants[i] = nullptr;   // shuru mein sab khaali hain ,ye kesi cheese ko point nai krta 
    }
}
void Room::addOccupant(Student* student)// ek bool return karta ha,check krta ha kya occupycount already 3 sa zyada ho gya ha
{
    if (occupantCount < 3)
    {
        occupants[occupantCount] = student;
        occupantCount++;
    }
    else
    {
        cout << "Room is full. Cannot add more occupants." << endl;
    }
}

bool Room::isFull() const
{
    return occupantCount >= 3;
} 
void Room::removeOccupant(Student* student)
{
    for (int i = 0; i < occupantCount; i++)
    {
        if (occupants[i] == student)
        {
            // is student ko hata kar, baaki sab ko ek jagah aage shift karen ,agar bad ma loop lagai to confusion ho gy
            for (int j = i; j < occupantCount - 1; j++)
            {
                occupants[j] = occupants[j + 1];
            }
            occupantCount--;
            cout << "Student removed from room." << endl;
            return;
        }
    }
    cout << "Student not found in this room." << endl;
}void Room::displayInfo() const
{
    cout << "Room Number: " << roomNumber << endl;
    cout << "Type: " << type << endl;
    cout << "Floor: " << floor << endl;
    cout << "Occupants (" << occupantCount << "): ";
    for (int i = 0; i < occupantCount; i++)
    {
        cout << occupants[i]->getName() << " "; // student pointer person sa inherit hua ha
    }
    cout << endl;
}
Room::Room()
{
    roomNumber = 0;
    type = "Unassigned";
    floor = 0;
    occupantCount = 0;
    for (int i = 0; i < 3; i++)
    {
        occupants[i] = nullptr;
    }
}

int Room::getRoomNumber() const // getters use huay ha
{
    return roomNumber;
}

string Room::getType() const
{
    return type;
}

int Room::getFloor() const
{
    return floor;
}