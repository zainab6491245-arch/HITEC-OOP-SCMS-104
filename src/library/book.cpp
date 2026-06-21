#include "book.h"
Book::Book(string id, string t, string a, int year, string g, string i, int copies)
	: LibraryItem(id, t, a, year) 
{
	isbn = i;
	genre = g;
	numberOfcopies = copies;
}
void Book::checkout()
{
	if (numberOfcopies > 0)
	{
		numberOfcopies--;
		cout << "Book checked out successfully." << endl;
	}
	else
	{
		cout << "No copies available for checkout." << endl;
	}
}
void Book::displayInfo() const
{
	cout << "Book ID: " << itemID << endl;
	cout << "Title: " << title << endl;
	cout << "Author: " << author << endl;
	cout << "Publication Year: " << publicationYear << endl;
	cout << "Genre: " << genre << endl;
	cout << "ISBN: " << isbn << endl;
	cout << "Number of Copies: " << numberOfcopies << endl;
}
string Book::getGenre() const
{
	return genre;
}
string Book::getISBN() const
{
	return isbn;
}
int Book::getNumberOfCopies() const
{
	return numberOfcopies;
}
