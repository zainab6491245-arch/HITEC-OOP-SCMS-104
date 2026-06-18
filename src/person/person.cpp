#include "person.h" // ye line all the declarations of the Person class ko include karne ke liye hai
Person::Person(string n, string c, int a, string cont)  // ye line constructor ka definition hai, isme humne name, cnic, age aur contact ko initialize kiya hai
{
	name = n;
	cnic = c;
	age = a;
	contact = cont;
}
string Person::getName() const
{
	return name;
}
string Person::getCnic() const
{
	return cnic;
}
int Person::getAge() const
{
	return age;
}
string Person::getContact() const
{
	return contact;
}