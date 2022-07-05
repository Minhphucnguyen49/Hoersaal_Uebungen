#include "SeminarParticipant.h"

SeminarParticipant::SeminarParticipant(std::string name, bool isListening)
    :hdaMember(name), Lecturer(name), Student(name, isListening)
{}

void SeminarParticipant::myName()
{
    std::cout << name << " is member of Seminar" << std::endl;
}
