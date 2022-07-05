#ifndef SEMINARPARTICIPANT_H
#define SEMINARPARTICIPANT_H

#include "Lecturer.h"
#include "Student.h"

class SeminarParticipant : public Lecturer, public Student
{
public:
    SeminarParticipant(std::string name, bool isListening);
    void myName() override;// so that Compiler knows in main which myName() it should call :sp.myName()


};

#endif // SEMINARPARTICIPANT_H
