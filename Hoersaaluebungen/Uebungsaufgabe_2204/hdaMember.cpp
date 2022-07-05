#include "hdaMember.h"


hdaMember::hdaMember(std::string name_in)//explicit constructor
    : name(name_in), isHappy(true)// constant bool isHappy = true initialisiert
{}

void hdaMember::myName()
{
    std::cout << "my Name is: " << name << std::endl;
}
