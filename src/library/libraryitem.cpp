#include"libraryitem.h"
LibraryItem::LibraryItem(string id, string t, string a, int year)
{
	itemID = id;
	title = t;
	author = a;
	publicationYear = year;
}
string LibraryItem::getItemID() const
{
	return itemID;
}
string LibraryItem::getTitle() const
{
	return title;
}
string LibraryItem::getAuthor() const
{
	return author;
}
int LibraryItem::getPublicationYear() const
{
	return publicationYear;
}
