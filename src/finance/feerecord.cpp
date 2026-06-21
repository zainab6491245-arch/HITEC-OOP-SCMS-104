#include"feerecord.h"
FeeRecord::FeeRecord(string Ref, double semFee, double hFee, double libFine)
{
	studentRef = Ref;
    semesterFee = semFee;
	hostelFee = hFee;
	libraryFine = libFine;
	totalpaid = 0.0;
	balance = semesterFee + hostelFee + libraryFine;

}
FeeRecord::FeeRecord(const FeeRecord& other)
{
	studentRef = other.studentRef;
	semesterFee = other.semesterFee;
	hostelFee = other.hostelFee;
	libraryFine = other.libraryFine;
	totalpaid = other.totalpaid;
	balance = other.balance;
	cout << "Copy constructor called for student: " << studentRef << endl;
}
FeeRecord& FeeRecord::operator=(const FeeRecord& other)
{
	if (this != &other)
	{
		studentRef = other.studentRef;
		semesterFee = other.semesterFee;
		hostelFee = other.hostelFee;
		libraryFine = other.libraryFine;
		totalpaid = other.totalpaid;
		balance = other.balance;
		cout << "Assignment operator called for student: " << studentRef << endl;
	}
	return *this;// Return the current object to allow for chained assignments
}	
FeeRecord::~FeeRecord()
{
	cout << "Destructor called for student: " << studentRef << endl;
}
FeeRecord& FeeRecord::operator-=(double amount) 
{
	balance -= amount;
	totalpaid += amount;
	return *this;
}
void FeeRecord::displayInfo() const
{
	cout << "Student Reference: " << studentRef << endl;
	cout << "Semester Fee: " << semesterFee << endl;
	cout << "Hostel Fee: " << hostelFee << endl;
	cout << "Library Fine: " << libraryFine << endl;
	cout << "Total Paid: " << totalpaid << endl;
	cout << "Balance: " << balance << endl;
}
string FeeRecord::getStudentRef() const
{
	return studentRef;
}
double FeeRecord::getSemesterFee() const
{
	return semesterFee;
}
double FeeRecord::getHostelFee() const
{
	return hostelFee;
}
double FeeRecord::getLibraryFine() const
{
	return libraryFine;
}
double FeeRecord::getBalance() const
{
	return balance;
}
