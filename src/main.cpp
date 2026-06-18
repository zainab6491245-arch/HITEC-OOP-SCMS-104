#include<iostream>
#include "person/person.h"
#include "person/student.h"
#include "person/gradstudent.h"
#include "person/faculty.h"
#include "person/staff.h"
#include <string>
using namespace std;

int main()
{
	cout << "===== Smart Campus Management System =====" << endl;
	cout << "===== Module 1: Person Hierarchy =====" << endl;
	string courses[] = { "OOP_104", "Physics_207", "Linear_Algebra_301" };
	Person* p1 = new Student("Zainab", "12345-6789012-3", 20, "0300-1234567", 101, 3.8, 4, courses, 3);
	Person* p2 = new GradStudent("Laiba", "98765-4321098-7", 25, "0300-7654321", 202, 3.9, 6, "Artificial Intelligence", "Dr. Smith");
	Person* p3 = new Faculty("Dr. Veena", "55555-5555555-5", 45, "0300-5555555", 303, 50000, "Computer Science", "Professor");
	Person* p4 = new Staff("Ali", "11111-1111111-1", 30, "0300-1111111", 404, 30000, "Administrator");
	p1->displayInfo();
	cout << endl;
	p2->displayInfo();
	cout << endl;
	p3->displayInfo();
	cout << endl;
	p4->displayInfo();
	delete p1;
	delete p2;
	delete p3;
	delete p4;
	return 0;
}erar