#include"faculty.h"
Faculty::Faculty(string n, string c, int a, string cont, int id, double sal, string dept,string design)
	: Person(n, c, a, cont)
{
	employeeId = id;
	salary = sal;
	department = dept;
	designation = design;
	numAssignedCourses = 0; // Initialize the number of assigned courses to 0
}
void Faculty::displayInfo() const
{
	cout << "Faculty Name: " << name << endl;
	cout << "CNIC: " << cnic << endl;
	cout << "Age: " << age << endl;
	cout << "Contact: " << contact << endl;
	cout << "Employee ID: " << employeeId << endl;
	cout << "Salary: " << salary << endl;
	cout << "Department: " << department << endl;
	cout << "Designation: " << designation << endl;
	cout << "Assigned Courses: ";
	for (int i = 0; i < numAssignedCourses; i++)
	{
		cout << Assignedcourses[i] << " ";
	}
	cout << endl;
}
void Faculty::assignCourse(string course)
{
	if (numAssignedCourses < 10)
	{
		Assignedcourses[numAssignedCourses] = course;
		numAssignedCourses++;
	}
	else
	{
		cout << "Cannot assign more courses. Maximum limit reached." << endl;
	}
}
string Faculty::getDepartment() const
{
	return department;
}
string Faculty::getDesignation() const
{
	return designation;
}
int Faculty::getEmployeeId() const
{
	return employeeId;
}