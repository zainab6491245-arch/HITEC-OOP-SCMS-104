
#include "Invoice.h"

int Invoice::invoiceCounter = 0;   // static member initialization

Invoice::Invoice(string date, string* items, int itemCount, double totalAmount)
{
    invoiceCounter++;
    invoiceID = invoiceCounter;

    this->date = date;
    this->itemCount = itemCount;
    this->totalAmount = totalAmount;

    this->items = new string[itemCount];
    for (int i = 0; i < itemCount; i++)
    {
        this->items[i] = items[i];
    }
}

Invoice::Invoice(const Invoice& other)
{
    invoiceID = other.invoiceID;
    date = other.date;
    itemCount = other.itemCount;
    totalAmount = other.totalAmount;

    items = new string[itemCount];// dynamically memory ko allocate ki
    for (int i = 0; i < itemCount; i++)
    {
        items[i] = other.items[i];
    }
    cout << "Copy Constructor called for Invoice ID: " << invoiceID << endl;
}

Invoice::~Invoice()
{
    delete[] items;//dynamically allocate memory ko free krna
    cout << "Destructor called for Invoice ID: " << invoiceID << endl;
}

int Invoice::getInvoiceCounter()
{
    return invoiceCounter;
}

int Invoice::getInvoiceID() const
{
    return invoiceID;
}

string Invoice::getDate() const
{
    return date;
}

double Invoice::getTotalAmount() const
{
    return totalAmount;
}

void Invoice::displayInfo() const
{
    cout << "Invoice ID: " << invoiceID << endl;
    cout << "Date: " << date << endl;
    cout << "Total Amount: " << totalAmount << endl;
    cout << "Items: ";
    for (int i = 0; i < itemCount; i++)
    {
        cout << items[i] << " ";
    }
    cout << endl;
}