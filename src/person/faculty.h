#ifndef FACULTY_H
#define FACULTY_H

#include "person.h"

class Faculty : public Person
{
private:
    int employeeId;
    double salary;
    string department;
	string designation;
	string Assignedcourses[10]; // Assuming a maximum of 10 courses
	int numAssignedCourses; // To keep track of the number of assigned courses

public:
    Faculty(string n, string c, int a, string cont, int id, double sal, string dept,string design);
    void displayInfo() const override;
	void assignCourse(string course);
    int getEmployeeId() const;
    double getSalary() const;
    string getDepartment() const;
    string getDesignation() const;

};

#endif // FACULTY_H