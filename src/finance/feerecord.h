#ifndef FEERECORD_H
#define FEERECORD_H
#include<string>
#include<iostream>
using namespace std;
class FeeRecord
{
private:
	string studentRef;
	double semesterFee;
	double hostelFee;
	double libraryFine;
	double totalpaid;
	double balance;
public :
	FeeRecord(string Ref, double semFee, double hFee, double libFine);
	FeeRecord(const FeeRecord& other);
	FeeRecord& operator=(const FeeRecord& other);
	~FeeRecord();
	FeeRecord& operator-=(double amount) ;// Overloading the '-' operator to subtract fee records
	void displayInfo() const;
	string getStudentRef() const;
	double getSemesterFee() const;
	double getHostelFee() const;
	double getLibraryFine() const;
	double getBalance() const;
};


#endif // !FEERECORD