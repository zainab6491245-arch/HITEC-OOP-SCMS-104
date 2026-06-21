#ifndef REPORTS_H
#define REPORTS_H

#include "../person/student.h"
#include <string>
#include <iostream>
#include <algorithm>//std::sort + std ::find  yahan sa ata ha
using namespace std;

void sortStudentsByGPA(Student* students[], int count);//student ki array gpa ka hisaab sa sort krnay ka liay by using std :: sort
void displayStudents(Student* students[], int count);//print -> sorted/unsorted
Student* findStudentByRollNo(Student* students[], int count, int rollNo);//use std:: find to find specific rollno
void generateCampusReport(Student* students[], int studentCount, int totalBooks, double totalFeeCollected, int totalRoomsOccupied);//generate a summary of report by combinning all

#endif // REPORTS_H