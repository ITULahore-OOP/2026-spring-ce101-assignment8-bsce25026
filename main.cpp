#include <iostream>
#include "functions.cpp"
using namespace std;

int main()
{
    cout << "UNIVERSITY SYSTEM\n";

    string name;
    int id;
    double cgpa, salary;
    string cardID;
    int accessLevel;
    int hours;

    cout << "\nEnter Student Name: ";
    cin >> name;
    cout << "\nEnter Student ID: ";
    cin >> id;
    cout << "\nEnter CGPA: ";
    cin >> cgpa;

    Student s(name, id, cgpa);

    cout << "\nEnter Staff Name: ";
    cin >> name;
    cout << "\nEnter Staff ID: ";
    cin >> id;
    cout << "\nEnter Salary: ";
    cin >> salary;
    cout << "\nEnter Card ID: ";
    cin >> cardID;
    cout << "\nEnter Access Level: ";
    cin >> accessLevel;

    AccessCard staffCard(cardID, accessLevel);
    Staff st(name, id, salary, staffCard);

    cout << "\nEnter TA Name: ";
    cin >> name;
    cout << "\nEnter TA ID: ";
    cin >> id;
    cout << "\nEnter CGPA: ";
    cin >> cgpa;
    cout << "\nEnter Salary: ";
    cin >> salary;
    cout << "\nEnter Card ID: ";
    cin >> cardID;
    cout << "\nEnter Access Level: ";
    cin >> accessLevel;
    cout << "\nEnter Working Hours: ";
    cin >> hours;

    AccessCard taCard(cardID, accessLevel);
    TeachingAssistant ta(name, id, cgpa, salary, taCard, hours);


    double newCGPA;
    cout << "\nEnter new CGPA for student: ";
    cin >> newCGPA;
    s.updateCGPA(newCGPA);
    cout << "\nUpdated CGPA: " << s.getCGPA() << endl;

    UniversityMember* members[3];
    members[0] = &s;
    members[1] = &st;
    members[2] = &ta;

    for (int i = 0; i < 3; i++)
    {
        members[i]->displayRole();
        cout << endl;
    }

    int score;
    string grade;

    cout << "\nEnter numeric score: ";
    cin >> score;
    ta.gradeAssignment(score);

    cout << "\nEnter letter grade: ";
    cin >> grade;
    ta.gradeAssignment(grade);

    cout << " Tutoring Session ";

    double d1, d2;
    cout << "\nEnter duration for Session 1: ";
    cin >> d1;
    cout << "\nEnter duration for Session 2: ";
    cin >> d2;

    TutoringSession t1(1, d1, &ta, &s);
    TutoringSession t2(2, d2, &ta, &s);

    if (t1 > t2)
        cout << "\nSession 1 is longer\n";
    else
        cout << "\nSession 2 is longer\n";

    TutoringSession merged = t1 + t2;
    cout << "\nMerged duration: " << merged.getDuration() << endl;

    cout << " Department ";

    Department dept("CS");

    dept.addMember(&s);
    dept.addMember(&st);
    dept.addMember(&ta);

    dept.displayAllRoles();

    return 0;
}