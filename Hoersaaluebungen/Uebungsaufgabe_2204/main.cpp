#include "hdaMember.h"
#include "SeminarParticipant.h"
#include <vector>


int main()
{
    std::vector<hdaMember*> members{};
    members.push_back(new Lecturer("Benjamin Meyer"));
    members.push_back( new Student("a b", true));
    members.push_back( new Student("c d", false));


    for (auto m : members)
    {
        m->myName();
    }
    // Übungsaufgabe 06.05.
    for (auto &m :members)
    {
        // cast the m (pointer of type hdaMember) down to the t (pointer with type Student*)
        Student* t = dynamic_cast<Student*>(m);

        if (t != nullptr)// if (t) geht auch
        {
            ++(*t);
            m->myName();
        }
    }
    SeminarParticipant sp("Benjamin Franklin", true);
    sp.myName();
}
