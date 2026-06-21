#ifndef INVOICE_H
#define INVOICE_H
#include <string>
#include <iostream>
using namespace std;

class Invoice
{
private:
    int invoiceID;
    string date;
    string* items;
    int itemCount;        
    double totalAmount;
    static int invoiceCounter;

public:
    Invoice(string date, string* items, int itemCount, double totalAmount);
    Invoice(const Invoice& other);
    ~Invoice();
    static int getInvoiceCounter();
    int getInvoiceID() const;
    string getDate() const;      
    double getTotalAmount() const;
    void displayInfo() const;    
};
#endif