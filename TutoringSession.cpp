#include "TutoringSession.h"
TutoringSession:: TutoringSession(int sessionID, double durationMinutes, TeachingAssistant* ta, Student* student){
    this->sessionID = sessionID;
    this->durationMinutes = durationMinutes;
    this->ta = ta;
    this->student = student;
}
double TutoringSession::  getDuration(){
        return durationMinutes;
}
void TutoringSession:: displaySession(){
    cout<<"Session ID: "<<sessionID<<endl;
    cout<<"Session Duration: "<<durationMinutes<<" minutes"<<endl;
}
TutoringSession TutoringSession :: operator+(const TutoringSession& other){
    TutoringSession res(0,durationMinutes + other.durationMinutes, ta,student);
    return res;
}

bool operator>(TutoringSession s1, TutoringSession s2){
    return s1.getDuration()>s2.getDuration();
}