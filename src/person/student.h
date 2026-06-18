#ifndef STUDENT_H
#define STUDENT_H

#include "person.h" //is ka matlab hai ke student class person class se inherit kar rahi hai, isliye hume person.h file ko include karna parta hai taki student class person class ke members ko access kar sake

class Student : public Person
{
private:
    int studentrollno;
    double gpa;
	int semester;
	string enrolledcourses[10]; // Assuming a maximum of 10 courses
	int numCourses; // To keep track of the number of enrolled courses

public:
    Student(string n, string c, int a, string cont, int id, double grade, int sem, string courses[], int num);
    void displayInfo() const override;
    int getStudentrollno() const;
    double getGpa() const;
	int getSemester() const;
	char calculateGrade() const;// ye function GPA ke basis par grade calculate karega, agar GPA 3.5 se zyada hai to grade A hoga, agar GPA 3.0 se zyada hai to grade B hoga, agar GPA 2.5 se zyada hai to grade C hoga, agar GPA 2.0 se zyada hai to grade D hoga aur agar GPA 2.0 se kam hai to grade F hoga
	void enrollCourse(string course);
};

#endif // STUDENT_H