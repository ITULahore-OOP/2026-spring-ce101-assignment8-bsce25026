#include "UniversityMember.h"
UniversityMember:: UniversityMember(string name, int memberID){
    this->name = name;
    this->memberID = memberID;
}
UniversityMember::~UniversityMember(){
    cout<<"Destructor for Uni Member called!\n";
}
string UniversityMember:: getName(){
    return name;
}
int UniversityMember:: getMemberID(){
    return memberID;
}