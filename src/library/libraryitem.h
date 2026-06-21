#ifndef lIBRARYITEM_H
#define lIBRARYITEM_H
#include<string>
#include<iostream>
using namespace std;
class LibraryItem
{
protected:
	string itemID;
	string title;
	string author;
	int publicationYear;

public :
	LibraryItem(string id, string t, string a, int year);
	virtual void checkout() = 0; // Pure virtual function for checkout
	virtual void displayInfo() const =0; //Yeh function bi virtual hai taki derived classes apni specific implementation de sakti hain
	string getItemID() const;
	string getTitle() const;
	string getAuthor() const;
	int getPublicationYear() const;
	virtual ~LibraryItem() {} // Virtual destructor for proper cleanup of derived classes
};
#endif 
