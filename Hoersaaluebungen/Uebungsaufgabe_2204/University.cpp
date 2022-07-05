#include "University.h"

University::University()
{
    members.push_back( new Lecturer ("Benjamin Mayer"));
    members.push_back( new Student("bb BB", true));
    members.push_back( new Student("cc CC", false));
}

University::~University()
{
    for (auto m : members)
        delete m;
}
#
void University::print() const
{
    for (auto m : members)
    {
        m->myName();
    }
}

const std::vector<hdaMember*> &University::getMembers() const
{
    return members;
}
//einfachste Version von Level (praktikum 2)

/**
 * @brief University::University
 * @param other
 *
 * save a Lecturer/Student/hdaMembers in a corresponding position in the vector of hdaMember*
 * But it can't be push_backed directly in the vector because they have diffenrent types (hdaMember* vs. Lecturer*,Student*
 * --> Using dynamic_cast to down cast m to the corresponding types Lecturer*,Student*
 * Syntax: dynamic cast<T>(Ausdruck)
    mit T als ”Zieldatentyp“

    Down cast means that cast Basis to Derived Class (down in class hierachy)


 *  typeid: Mittels des typeid Operators l ̈asst sich der Datentyp eines Objekts (oder eines beliebigen Ausdrucks)
    ermitteln.
 */
University::University( const University& other )
{
    for (auto m : other.members)
    {
        if( typeid(*m) == typeid (Lecturer) )
        {
            auto l = dynamic_cast<Lecturer*>(m);
            members.push_back(new Lecturer(*l));
        }
        else if (typeid(*m) == typeid (Student))
        {
            auto s = dynamic_cast<Student*>(m);
            members.push_back(new Student(*s));

        }
        //redundant because m (or other.members) is of type hdaMember*
        else if (typeid(*m) == typeid (hdaMember))
        {
            auto h = dynamic_cast<hdaMember*>(m);
            members.push_back(new hdaMember(*h));
        }
    }
}


