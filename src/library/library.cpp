
#include "library.h"
#include "book.h"
#include "journal.h"

Library::Library()
{
    itemCount = 0;
}

Library::~Library()
{
    for (int i = 0; i < itemCount; i++)
    {
        delete items[i];
    }
}

void Library::addItem(LibraryItem* item)
{
    if (itemCount < 50)
    {
        items[itemCount] = item;
        itemCount++;
    }
    else
    {
        cout << "Library is full. Cannot add more items." << endl;
    }
}

void Library::displayAllItems() const
{
    cout << "===== Library Catalog =====" << endl;
    for (int i = 0; i < itemCount; i++)
    {
        items[i]->displayInfo();
        cout << endl;
    }
}

LibraryItem* Library::searchByTitle(string searchTitle) const
{
    for (int i = 0; i < itemCount; i++)
    {
        if (items[i]->getTitle() == searchTitle)
        {
            return items[i];
        }
    }
    return nullptr;
}

void Library::saveToFile(string filename) const
{
    ofstream outFile(filename);
    if (!outFile)
    {
        cout << "Error opening file for writing." << endl;
        return;
    }

    for (int i = 0; i < itemCount; i++)
    {
        Book* b = dynamic_cast<Book*>(items[i]);
        if (b != nullptr)
        {
            outFile << "BOOK|" << b->getItemID() << "|" << b->getTitle() << "|"
                << b->getAuthor() << "|" << b->getPublicationYear() << "|"
                << b->getISBN() << "|" << b->getGenre() << "|"
                << b->getNumberOfCopies() << endl;
        }
        else
        {
            Journal* j = dynamic_cast<Journal*>(items[i]);
            if (j != nullptr)
            {
                outFile << "JOURNAL|" << j->getItemID() << "|" << j->getTitle() << "|"
                    << j->getAuthor() << "|" << j->getPublicationYear() << "|"
                    << j->getISSN() << "|" << j->getVolume() << "|"
                    << j->getIssue() << endl;
            }
        }
 }
    }