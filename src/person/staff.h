#ifndef STAFF_H
#define STAFF_H
#include "person.h"
class Staff : public Person
{
private:
	int staffId;
	double salary;
	string role;
public:
	Staff(string n, string c, int a, string cont, int id, double sal, string r);
	void displayInfo() const override;
	int getStaffId() const;
	double getSalary() const;
	string getRole() const;
};
#endif // STAFF_H
	