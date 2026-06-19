#ifndef EXCEPTION_H
#define EXCEPTION_H
#include <exception>
using namespace std;

class CapacityExceededException : public exception
{
public:
	const char* what() const noexcept override
	{
		return "Course capacity exceeded. Student added to waiting list.";
	}
};
class OverdueException : public exception
{

public:
	const char* what() const noexcept override
	{
		return "Book return is overdue. Please return the book as soon as possible.";
	}
};
#endif // EXCEPTION_H
