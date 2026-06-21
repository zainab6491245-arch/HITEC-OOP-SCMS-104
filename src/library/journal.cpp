#include"journal.h"
Journal::Journal(string id, string t, string a, int year, string i, int v, int iss, string f)
	: LibraryItem(id, t, a, year)
{
	issn = i;
	volume = v;
	issue = iss;
	field = f;
}
void Journal::checkout()
{
	cout << "Journal checked out successfully." << endl;
}
void Journal::displayInfo() const
{
	cout << "Journal ID: " << itemID << endl;
	cout << "Title: " << title << endl;
	cout << "Author: " << author << endl;
	cout << "Publication Year: " << publicationYear << endl;
	cout << "ISSN: " << issn << endl;
	cout << "Volume: " << volume << endl;
	cout << "Issue: " << issue << endl;
	cout << "Field: " << field << endl;
}
string Journal::getISSN() const
{
	return issn;
}
int Journal::getVolume() const
{
	return volume;
}
int Journal::getIssue() const
{
	return issue;
}
string Journal::getField() const
{
	return field;
}
