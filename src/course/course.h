#ifndef COURSE_H
#define COURSE_H
#include <string>
#include <iostream>
using namespace std;

class Faculty;
class Student;

class Course
{
private:
	string code;          // course ka code, jaise "CS-104L"
	string title;         // course ka naam, jaise "OOP"
	int creditHours;      // kitne credit hours hain, jaise 3
	Faculty* teacher;     // konsa Faculty ye course parhata hai
	int seatLimit;        // max kitne students enroll ho sakte hain
	int seatsFilled;      // abhi kitne students enroll ho gaye
	Student* students[100]; // enrolled students ki list
	Student* waitingList[10];   // waiting list ke liye array (max 10 students)
	int waitingCount;     // waiting list mein kitne students hain         

public:
	Course(string c, string t, int hours, Faculty* t1, int limit);
	void setTeacher(Faculty* t1);
	void enroll(Student* s);
	void displayInfo() const;

	string getCode() const;
	string getTitle() const;
	int getCreditHours() const;
	int getWaitingCount() const;
	int getSeatsFilled() const;
	int getSeatLimit() const;
	Student* getWaitingStudent(int index) const;

	bool operator==(const Course& other) const;
	Student** operator+(const Course& other);
	friend ostream& operator<<(ostream& out, const Course& c);
};

#endif // COURSE_H