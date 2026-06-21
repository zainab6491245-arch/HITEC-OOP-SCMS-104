#ifndef LIBRARY_H
#define LIBRARY_H	
#include "libraryitem.h"
#include<fstream>
using namespace std;
class Library
{private :
	LibraryItem* items[50];
	int itemCount;
public:
	Library();
	void addItem(LibraryItem* item);
	void displayAllItems() const;
	void saveToFile(string filename) const;
	void loadFromFile(string filename);
	LibraryItem* searchByTitle(string searchTitle) const;
	~Library();
};
#endif // LIBRARY_H