#ifndef UNIVERSITY_H
#define UNIVERSITY_H

#include "hdaMember.h"
#include "Lecturer.h"
#include "Student.h"

/** 13.05.2022 - Übungsaufgabe
 * @brief The University class does basically the same as the main
 *  std::vector<hdaMember*> members{};
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
        Student* t = dynamic_cast<Student*>(m);
        // cast the m (pointer of type hdaMember) to the t (pointer with type Student*)
        if (t != nullptr)// if (t) geht auch
        {
            ++(*t);
            m->myName();
        }
    }
    SeminarParticipant sp("Benjamin Franklin", true);
    sp.myName();

    It works like DungeonCrawler class in Praktikum
 */
class University
{
public:
    University();
    /**
     * @brief University is a copy constructor
     * @param other
     */
    University(const University& other);

    /**
     * @brief operator = is a assignment constructor
     * @param other
     * @return
     */
    University& operator= (University other) ;
    ~University();

    void print() const;
    const std::vector<hdaMember*>& getMembers() const;

private:
    std::vector<hdaMember *> members;
    
};

#endif // UNIVERSITY_H
