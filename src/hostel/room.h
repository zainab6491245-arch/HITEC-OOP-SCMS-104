
#ifndef ROOM_H
#define ROOM_H

#include "../person/student.h"
#include <string>
#include <iostream>
using namespace std;
class Room
{
private:
    int roomNumber;
    string type;
    int floor;
    Student* occupants[3];   // max 3 occupants (triple room jaisa),3 room types ki wajah sa
    int occupantCount;

public:
    Room();
    Room(int n, string roomT, int flr);

    void addOccupant(Student* student);
    void removeOccupant(Student* student);
    bool isFull() const;//check ka room ma or jagah ha ka nahi
    void displayInfo() const;
    int getRoomNumber() const;
    string getType() const;
    int getFloor() const;
};

#endif // ROOM_H