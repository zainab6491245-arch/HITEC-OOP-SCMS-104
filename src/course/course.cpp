
#include "course.h"
#include "../person/faculty.h"
#include "../person/student.h"
#include "../utils/exception.h"

 // Course banate waqt shuru ki values set karo
Course::Course(string c, string t, int hours, Faculty* t1, int limit)
{
    code = c;
    title = t;
    creditHours = hours;
    teacher = t1;
    seatLimit = limit;
    seatsFilled = 0;
    waitingCount = 0;
}

// Teacher badalne ke liye
void Course::setTeacher(Faculty* t1)
{
    teacher = t1;
}

// Student ko course mein enroll karo
void Course::enroll(Student* s)
{
    if (seatsFilled < seatLimit)
    {
        // Seat khaali hai — direct enroll karo
        students[seatsFilled] = s;
        seatsFilled++;
    }
    else
    {
        // Seat full hai — waiting list mein daalo aur error throw karo
        waitingList[waitingCount] = s;
        waitingCount++;
        throw CapacityExceededException();
    }
}

// Course ki info print karo
void Course::displayInfo() const
{
    cout << "Course Code: " << code << endl;
    cout << "Course Title: " << title << endl;
    cout << "Credit Hours: " << creditHours << endl;
    cout << "Seats Filled: " << seatsFilled << "/" << seatLimit << endl;
}

// ===== Getters (private values ko bahar se read karne ke liye) =====
string Course::getCode() const { return code; }
string Course::getTitle() const { return title; }
int Course::getCreditHours() const { return creditHours; }
int Course::getWaitingCount() const { return waitingCount; }
int Course::getSeatsFilled() const { return seatsFilled; }
int Course::getSeatLimit() const { return seatLimit; }

Student* Course::getWaitingStudent(int index) const
{
    return waitingList[index];
}

// ===== Operator Overloading =====

// course1 == course2  →  dono ka code match karta hai?
bool Course::operator==(const Course& other) const
{
    return code == other.code;
}

// cout << course1  →  course ki info print karo
ostream& operator<<(ostream& out, const Course& c)
{
    out << "Course Code: " << c.code << endl;
    out << "Course Title: " << c.title << endl;
    out << "Seats Filled: " << c.seatsFilled << "/" << c.seatLimit << endl;
    return out;
}

// course1 + course2  →  dono ki waiting lists jodo (merge)
Student** Course::operator+(const Course& other)
{
    int total = waitingCount + other.waitingCount;
    Student** merged = new Student * [total];

    for (int i = 0; i < waitingCount; i++)
        merged[i] = waitingList[i];

    for (int i = 0; i < other.waitingCount; i++)
        merged[waitingCount + i] = other.waitingList[i];

    return merged; // ise use karne wale ko khud delete[] karna hoga
}