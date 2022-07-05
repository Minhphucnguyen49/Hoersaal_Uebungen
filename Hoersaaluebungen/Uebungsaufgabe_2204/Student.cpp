#include "Student.h"

void Student::myName()
{
    std::cout << "my name is " << name << " and I am studying here." << std::endl;
}

Student::Student(std::string name, bool isListening)
    : hdaMember(name), isListening(isListening)
{
    semesterCount = 1;
}

void Student::listens()
{
    if (isListening)
    {
        std::cout << "aha" << std::endl;
    }
    else
        std::cout << "zZz" << std::endl;
}


