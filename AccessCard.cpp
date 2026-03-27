#include "AccessCard.h"
AccessCard::AccessCard(string id_num, int acclvl)
{ cardID = id_num;
    accessLevel = acclvl;
}
string AccessCard:: getCardID(){
    return cardID;
}
int AccessCard:: getAccessLevel(){
    return accessLevel;
}
void AccessCard:: displayCardInfo(){
    cout<<"Card ID: "<<cardID;
    cout<<", Access Level: "<<accessLevel;
}