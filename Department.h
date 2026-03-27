#ifndef DEPARTMENT_H
#define DEPARTMENT_H
#include<string>
#include <iostream>
#include "UniversityMember.h"
using namespace std;
class Department
{
private:
    string departmentName;
    UniversityMember* members[50];
    int memberCount;
public:
    Department(string departmentName);
    ~Department();
    void addMember(UniversityMember* member);
    void displayAllRoles();
};


#endif