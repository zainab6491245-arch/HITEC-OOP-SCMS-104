#ifndef BOOK_H
#define BOOK_H
#include "libraryitem.h"
class Book : public LibraryItem
{
private:
	string genre;
	string isbn;
	int numberOfcopies;

public:
	Book(string id, string t, string a, int year, string g, string i, int copies);
	void checkout() override;// Yeh function or display info pure virtual function libraryItem class se override kar raha hai, iska implementation Book class mein diya gaya hai
	void displayInfo() const override;
	string getGenre() const;
	string getISBN() const;
	int getNumberOfCopies() const;
};
#endif // BOOK_H
