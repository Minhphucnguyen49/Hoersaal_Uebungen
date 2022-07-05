#include "Lecturer.h"

Lecturer::Lecturer(std::string name_in)
    :hdaMember(name_in)// because lecuterer is also a hdaMember => explicit constructor is being used
{}

void Lecturer::talk()
{
    static int count {0};
    if ( count < 5 )
    {
        std::cout << "PG2 is very important!" << std::endl;
        count ++;
        talk();
    }
    else
    {
        count = 0;
    }
}

void Lecturer::myName()
{
    std::cout << "my Name is " << name << " and I am a Lecturer" << std::endl;
}
