#include "student.h"
Student::Student(string n, string c, int a, string cont, int id, double grade, int sem, string courses[], int num)
	: Person(n, c, a, cont)
{
	studentrollno = id;
	gpa = grade;
	semester = sem;
	numCourses = num;
	for (int i = 0; i < numCourses; i++)
	{
		enrolledcourses[i] = courses[i];
	}
}
void Student::displayInfo() const
{
	cout << "Student Name: " << name << endl;
	cout << "CNIC: " << cnic << endl;
	cout << "Age: " << age << endl;
	cout << "Contact: " << contact << endl;
	cout << "Student Roll No: " << studentrollno << endl;
	cout << "GPA: " << gpa << endl;
	cout << "Grade: " << calculateGrade() << endl;
	cout << "Semester: " << semester << endl;
	cout << "Enrolled Courses: ";
	for (int i = 0; i < numCourses; i++)
	{
		cout << enrolledcourses[i] << " ";
	}
	cout << endl;
}
char Student::calculateGrade() const // ye function GPA ke basis par grade calculate karega, agar GPA 3.5 se zyada hai to grade A hoga, agar GPA 3.0 se zyada hai to grade B hoga, agar GPA 2.5 se zyada hai to grade C hoga, agar GPA 2.0 se zyada hai to grade D hoga aur agar GPA 2.0 se kam hai to grade F hoga
{
	if (gpa >= 3.5)
		return 'A';
	else if (gpa >= 3.0)
		return 'B';
	else if (gpa >= 2.5)
		return 'C';
	else if (gpa >= 2.0)
		return 'D';
	else
		return 'F';
}
void Student::enrollCourse(string course)
{
	if (numCourses < 10)
	{
		enrolledcourses[numCourses] = course;
		numCourses++;
	}
	else
	{
		cout << "Cannot enroll in more courses. Maximum limit reached." << endl;
	}
}
int Student::getStudentrollno() const
{
	return studentrollno;
}
double Student::getGpa() const
{
	return gpa;
}
int Student::getSemester() const
{
	return semester;
}