#include "staff.h"
Staff::Staff(string n, string c, int a, string cont, int id, double sal, string r)
	: Person(n, c, a, cont)
{
	staffId = id;
	salary = sal;
	role = r;
}
void Staff::displayInfo() const
{
	cout << "Staff Name: " << name << endl;
	cout << "CNIC: " << cnic << endl;
	cout << "Age: " << age << endl;
	cout << "Contact: " << contact << endl;
	cout << "Staff ID: " << staffId << endl;
	cout << "Salary: " << salary << endl;
	cout << "Role: " << role << endl;
}
int Staff::getStaffId() const
{
	return staffId;
}
string Staff::getRole() const
{
	return role;
}
double Staff::getSalary() const
{
	return salary;
}