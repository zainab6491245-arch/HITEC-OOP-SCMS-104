#include"gradstudent.h"
GradStudent::GradStudent(string n, string c, int a, string cont, int id, double gpa, int sem, string topic, string advisor)
	: Student(n, c, a, cont, id, gpa, sem, nullptr, 0) // Call the Student constructor with appropriate parameters
{
	ThesisTopic = topic;
	AdvisorName = advisor;
}
string GradStudent::getThesisTopic() const
{
	return ThesisTopic;
}

string GradStudent::getAdvisorName() const
{
	return AdvisorName;
}
void GradStudent::displayInfo() const
{
	Student::displayInfo(); // Call the base class displayInfo to show student details
	cout << "Thesis Topic: " << ThesisTopic << endl;
	cout << "Advisor Name: " << AdvisorName << endl;
}