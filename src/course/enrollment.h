#ifndef ENROLLMENT_H
#define ENROLLMENT_H

#include "course.h"
#include "../person/student.h" //  ../ ka matlab hai ki hum current directory se ek level up jaa rahe hain aur usmein person directory ko search kar rahe hain or usmein student.h file ko include kar rahe hain taki Enrollment class Student class ke members ko access kar sake bcz person class pure virtual class hai aur uska object nahi banaya ja sakta isliye hum student class ko include kar rahe hain taki Enrollment class student class ke members ko access kar sake
#include<iostream>
#include<string>
using namespace std;


class Enrollment
{
private:
	Course* course;//ye pointer isliye banaya hai ka address ko refer krta hai,
	//abstract class ka object nahi banaya ja sakta isliye hum pointer banate hain taki hum course class ke members ko access kar sake aur uske functions ko call kar sake
	Student* student;
	string enrollmentdate;
	double grade;

public:
    Enrollment( Course* c,  Student* s, string date, double g);
    void displayInfo() const;
	string getEnrollmentDate() const;
	double getGrade() const;

};
#endif // ENROLLMENT_H