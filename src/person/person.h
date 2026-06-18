#ifndef PERSON_H // aksar baray projects m bohat si files hoty ha to unko include karna parta ha aur agar kisi file ko do bar include kar diya to error a jata ha isliye hum include guard use karte ha taki agar file do bar include ho jaye to compiler usko ignore kar de
#define PERSON_H //  ye line include guard ka start hai, agar PERSON_H define nahi hai to usko define kar do aur is file ko include kar do, agar PERSON_H already defined hai to is file ko ignore kar do
#include <string>
#include <iostream>
using namespace std;

class Person
{
protected:
    string name;
	string cnic;
    int age;
	string contact;
	
public:
    Person(string n,string c,int a,string cont);
	virtual void displayInfo()
		const = 0;
virtual ~Person() = default;
	string getName() const;
		string getCnic() const;
		int getAge() const;
		string getContact() const;

};
#endif // ab hi tak humne person class banayi hai jisme humne name, cnic, age aur contact ko protected banaya hai taki derived classes unko access kar sake aur humne displayInfo function ko pure virtual function banaya hai taki derived classes usko override kar sake aur apni information display kar sake, humne destructor ko virtual banaya hai taki agar kisi derived class ka object delete kiya jaye to uska destructor bhi call ho jaye, humne getter functions bhi banaye hai taki hum name, cnic, age aur contact ko access kar sake	