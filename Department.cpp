#include "Department.h"
Department:: Department(string departmentName){
    this-> departmentName = departmentName;
    for (int i = 0; i< 50;i++){
        members[i] = nullptr;
    }
    memberCount = 0;
}
Department:: ~Department(){
    cout<<"Destructor for Dept called!\n";
}
void Department:: addMember(UniversityMember* member){
    if(memberCount<50){
        members[memberCount] = member;
        memberCount++;
    }
    else{
        cout<<"Members Full!\n";
    }
}
void Department:: displayAllRoles(){
    for (int i = 0; i < memberCount; i++){
        members[i]->displayRole();
    }
}