#ifndef STUDENT_H
#define STUDENT_H
#include "hdaMember.h"
class Lecturer;// wichtig für Lecturer* mentor;

class Student : virtual public hdaMember
{
public:
    Student (std::string name, bool isListening);
    void listens();
    void myName() override;
// 06.05.
    //overload of prefix ++
    Student& operator++(){
        ++semesterCount;
        return *this;
    }
    // Overload of postfix ++
    Student operator++(int)
    {
        Student tmp = *this;
        ++tmp.semesterCount;
        return tmp;
    }

    //Overload of <
    bool operator < (Student& other) const
    {
        return semesterCount < other.semesterCount;
    }

private:
    bool isListening;
    int semesterCount;//06.05.
    Lecturer* mentor;



};


#endif // STUDENT_H
