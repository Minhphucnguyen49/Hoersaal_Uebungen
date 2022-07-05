#ifndef LECTURER_H
#define LECTURER_H

#include "hdaMember.h"

class Student;// do not need the #include "Student.h": das nennt man Forward Class  Declaration
class Lecturer : virtual public hdaMember
{
public:
    Lecturer(std::string name);
    void talk();
    void myName() override;
protected:
    std::vector<Student*> mentee;


};

#endif // LECTURER_H
