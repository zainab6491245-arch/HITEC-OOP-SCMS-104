#ifndef GRADSTUDENT_H
#define GRADSTUDENT_H
#include "student.h"
class GradStudent : public Student
{
private:
	string ThesisTopic;
	string AdvisorName;
public:
	GradStudent(string n, string c, int a, string cont, int id, double gpa, int sem, string topic, string advisor);
	void displayInfo() const override;
	string getThesisTopic() const;
	string getAdvisorName() const;
};
#endif // GRADSTUDENT_H