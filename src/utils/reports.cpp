#include "reports.h"

void sortStudentsByGPA(Student* students[], int count)
{
    sort(students, students + count, [](Student* a, Student* b)
        {
            return a->getGpa() > b->getGpa();
        }
    );
}

void displayStudents(Student* students[], int count)
{
    cout << "===== Student List =====" << endl;
    for (int i = 0; i < count; i++)
    {
        students[i]->displayInfo();
        cout << endl;
    }
}

Student* findStudentByRollNo(Student* students[], int count, int rollNo)
{
    auto it = find_if(students, students + count, [rollNo](Student* s) {
        return s->getStudentrollno() == rollNo;
        });

    if (it != students + count)
    {
        return *it;
    }
    return nullptr;
}

void generateCampusReport(Student* students[], int studentCount, int totalBooks, double totalFeeCollected, int totalRoomsOccupied)
{
    cout << "============================================" << endl;
    cout << "   SMART CAMPUS MANAGEMENT SYSTEM - REPORT   " << endl;
    cout << "============================================" << endl;
    cout << "Total Students Enrolled: " << studentCount << endl;
    cout << "Total Books in Library: " << totalBooks << endl;
    cout << "Total Fee Collected: " << totalFeeCollected << endl;
    cout << "Total Hostel Rooms Occupied: " << totalRoomsOccupied << endl;
    cout << "============================================" << endl;
}