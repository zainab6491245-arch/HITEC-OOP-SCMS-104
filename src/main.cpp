#include<iostream>
#include "person/person.h"
#include "person/student.h"
#include "person/gradstudent.h"
#include "person/faculty.h"
#include "person/staff.h"
#include "course/course.h"
#include "course/enrollment.h"
#include "utils/exception.h"
#include "library/libraryItem.h"
#include "library/book.h"
#include "library/journal.h"
#include "library/library.h"
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
	cout << "===== Module 2 : Course and Enrollment =====" << endl << endl;
	Faculty* facultyforcourse = new Faculty("Dr. Veena", "55555-5555555-5", 45, "0300-5555555", 303, 50000, "Computer Science", "Professor");
	Course* course1 = new Course("CS_104L", "Object_Oriented Programming", 3, facultyforcourse, 2);
	string courseArr[] = { "CS_104L" };
	Student* s1 = new Student("Zainab_Amir", "11111-1111111-1", 19, "0300-7654432", 104, 4.0, 5, courseArr, 1);
	Student* s2 = new  Student("Laiba_Javed", "22222-2222222-2", 20, "0300-1234567", 105, 3.5, 4, courseArr, 1);
	Student* s3 = new Student("Fatima_Batool", "33333-3333333-3", 21, "0300-9876543", 106, 3.8, 4, courseArr, 1);
	try // try ki bracket mein risky code(error code) rakha jata hai,agar koi throw chal gai to code crash nai hota
	//agar try ki bracket mein koi error aata hai to catch ki bracket mein usko handle kiya jata hai
	{
		course1->enroll(s1);
		cout << "Student 1 enrolled successfully in course " << endl;
		course1->enroll(s2);
		cout << "Student 2 enrolled successfully in course " << endl;
		course1->enroll(s3); // This should throw an exception
		cout << "Student 3 enrolled successfully in course " << endl;
	}
	catch (const CapacityExceededException& e) //ye specific exception ko pakar leta hai
	{
		cout << e.what() << endl;// ye line exception ka message print karega
	}//bina try-catch ke agar exception throw hota to program crash ho jata
	cout << endl;
	course1->displayInfo();
	cout << "Enrolled Students: " << endl;
	Enrollment* enrollment1 = new Enrollment(course1, s1, "2024-01-15", 3.8);
	enrollment1->displayInfo();
	cout << endl;
	cout << "===== Operator Overloading Demonstration =====" << endl;//Overloading the '==' operator to compare two courses based on their course code
	cout << "===== Comparing Courses =====" << endl;
	Course* course2 = new Course("CS_104L", "Object_Oriented Programming", 3, facultyforcourse, 2);
	if (*course1 == *course2)
	{
		cout << "Courses are the same based on course code." << endl;
	}
	else
	{
		cout << "Courses are different based on course code." << endl;
	}
	cout << *course1 << endl;//Overloading the '<<' operator to display course information
	delete facultyforcourse;// Used for memory cleanup
	delete course1;
	delete course2;
	delete s1;
	delete s2;
	delete s3;
	delete enrollment1;

	cout << "===== Module 3 : Library Management System =====" << endl << endl;
	Library library;
	Book* book1 = new Book("B001", "C++ Programming", "Bjarne Stroustrup", 2013, "Programming", "978-0321563842", 5);
	Journal* journal1 = new Journal("J001", "AI Research", "John Doe", 2022, "1234-5678", 10, 2, "Artificial Intelligence");
	Book* book2 = new Book("B002", "Data Structures", "Mark Allen Weiss", 2014, "Computer Science", "978-0132847377", 3);

	library.addItem(book1);
	library.addItem(journal1);
	library.addItem(book2);
	library.displayAllItems();
	cout << "Searching for Title" << endl;
	LibraryItem* foundItem = library.searchByTitle("C++ Programming");
	if (foundItem != nullptr)
	{
		foundItem->displayInfo();
	}
	else
	{
		cout << "Item not found." << endl;
	}
	cout << endl;
	cout << "Checking out a item:" << endl;
	book1->checkout();
	journal1->checkout();
	book2->checkout();
	cout << endl;
	cout << "Saving library data to file..." << endl;
	library.saveToFile("library_data.txt");
	cout << endl;
	cout << " Demonstrating OverdueException" << endl;
	try
	{
		double fineAmount = 10.0; // Example fine amount
		throw OverdueException(); // Throwing the custom exception
	}
	catch (const OverdueException& e)
	{
		cout << e.what() << endl;
	}

	return 0;
}
