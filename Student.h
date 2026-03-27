#ifndef STUDENT_H
#define STUDENT_H
#include<string>
#include <iostream>
#include "UniversityMember.h"
using namespace std;
class Student: virtual public UniversityMember
{
private:
    double cgpa;
public:
    Student(string name, int memberID, double cgpa);
    ~Student();
    double getCGPA();
    void updateCGPA(double newCGPA);
    void displayRole() override;

};


#endif