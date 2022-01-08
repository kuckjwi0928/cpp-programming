//
// Created by kuckjwi on 2022/01/09.
//

#include "NameCard.h"

NameCard::NameCard(string name, string companyName, string phone, COMP_POS position) {
    this->name = name;
    this->companyName = companyName;
    this->phone = phone;
    this->position = position;
}

void NameCard::ShowNameCardInfo() const {
    cout<<"name:"<<name<<endl;
    cout<<"company:"<<companyName<<endl;
    cout<<"phone:"<<phone<<endl;
    switch (position) {
        case COMP_POS::CLERK:
            cout<<"position:"<<"사원";
            break;
        case COMP_POS::SENIOR:
            cout<<"position:"<<"주임";
            break;
        case COMP_POS::ASSIST:
            cout<<"position:"<<"대리";
            break;
        case COMP_POS::MANAGER:
            cout<<"position:"<<"팀장";
            break;
        default:
            break;
    }
}

int main() {
    NameCard manClerk("Lee", "ABCEng", "010-1111-2222", COMP_POS::CLERK);
    NameCard manSENIOR("Hong", "OrangeEng", "010-3333-4444", COMP_POS::SENIOR);
    NameCard manAssist("Kim", "SoGoodComp", "010-5555-6666", COMP_POS::ASSIST);
    manClerk.ShowNameCardInfo();
    manSENIOR.ShowNameCardInfo();
    manAssist.ShowNameCardInfo();
}
