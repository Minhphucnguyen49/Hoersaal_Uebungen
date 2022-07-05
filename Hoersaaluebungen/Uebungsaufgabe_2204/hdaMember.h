#ifndef HDAMEMBER_H
#define HDAMEMBER_H


#include <iostream>
#include <vector>

class hdaMember
{
public:
    explicit hdaMember( std::string name );// explicit constructor //nur ein Parameter => explicit (schon gelernt)
    virtual ~hdaMember(){};//abstract destructor
    virtual void myName();//print out in console Names and Subclasses

protected://hier should be protected because we are using the Vererbungstruktur,
          //if private is used, then "name" in student.cpp can't not be seen
    std::string name;
    const bool isHappy;
};



#endif // HDAMEMBER_H
