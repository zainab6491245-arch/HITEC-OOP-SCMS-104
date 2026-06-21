#ifndef JOURNAL_H
#define JOURNAL_H
#include"libraryitem.h"
class Journal : public LibraryItem
{private:
	string issn;
	int volume;
	int issue;
	string field;
public :
	Journal(string id, string t, string a, int year, string i, int v, int iss, string f);
	void checkout() override;
	void displayInfo() const override;
	string getISSN() const;
	int getVolume() const;
	int getIssue() const;
	string getField() const;
};
#endif 
