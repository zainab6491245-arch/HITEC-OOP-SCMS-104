#include"enrollment.h"
Enrollment::Enrollment(Course* c, Student* s, string date, double g)
{
	course = c;
	student = s;
	enrollmentdate = date;
	grade = g;
}	
void Enrollment::displayInfo() const
{
	cout << "===== Enrollment Information =====" << endl;
	cout << "Course : " << endl;
	course->displayInfo();
	cout << "Student Name: " << endl;
	student->displayInfo() ; // Assuming Student class has a displayInfo method to show student details
	cout << "Enrollment Date: " << enrollmentdate << endl;
	cout << "Grade: " << grade << endl;
}
string Enrollment::getEnrollmentDate() const
{
	return enrollmentdate;
}
double Enrollment::getGrade() const
{
	return grade;
}
