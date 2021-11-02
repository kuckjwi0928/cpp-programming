#include <iostream>
#include <vector>
#include <map>

using namespace std;

void ShowMenu();
void MakeAccount();
void DepositMoney();
void WithdrawMoney();
void ShowAllAccount();

typedef struct
{
    int id;
    int balance;
    string name;
} Account;

map<int, Account> accMap;

int main(void)
{
    int menu;
    while (1)
    {
        ShowMenu();
        cout<<"선택: ";
        cin>>menu;
        switch (menu)
        {
            case 1:
                MakeAccount();
                break;
            case 2:
                DepositMoney();
                break;
            case 3:
                WithdrawMoney();
                break;
            case 4:
                ShowAllAccount();
                break;
            default:
                cout<<"프로그램을 종료합니다."<<endl;
                return 0;
        }
    }
}

void ShowMenu()
{
    cout<<"1. 계좌개설"<<endl;
    cout<<"2. 입급"<<endl;
    cout<<"3. 출금"<<endl;
    cout<<"4. 계좌정보 전체 출력"<<endl;
    cout<<"5. 종료"<<endl;
}

void MakeAccount()
{
    int id;
    int balance;
    string name;

    cout<<"[계좌개설]"<<endl;
    cout<<"계좌ID: ";
    cin>>id;

    if (accMap.contains(id)) {
        cout<<"이미 존재하는 계좌 입니다."<<endl;
        return;
    }

    cout<<"이름: ";
    cin>>name;
    cout<<"입금액: ";
    cin>>balance;

    Account acc = {
        id,
        balance,
        name
    };

    accMap.insert({id, acc});
}

void DepositMoney()
{
    int id;
    int money;

    cout<<"[입금]"<<endl;
    cout<<"계좌ID: ";
    cin>>id;

    if (!accMap.contains(id)) {
        cout<<"존재하지 않는 계좌 입니다."<<endl;
        return;
    }

    cout<<"입금액: ";
    cin>>money;
    
    Account acc = accMap.find(id)->second;
    acc.balance = acc.balance += money;
    accMap.find(id)->second = acc;
    cout<<"입급 완료"<<endl;
}

void WithdrawMoney()
{
    int id;
    int money;

    cout<<"[출금]"<<endl;
    cout<<"계좌ID: ";
    cin>>id;

    if (!accMap.contains(id)) {
        cout<<"존재하지 않는 계좌 입니다."<<endl;
        return;
    }

    cout<<"출금액: ";
    cin>>money;

    Account acc = accMap.find(id)->second;

    if (money > acc.balance) {
        cout<<"잔액이 부족합니다."<<endl;
        return;
    }

    acc.balance = acc.balance -= money;
    accMap.find(id)->second = acc;
    cout<<"입급 완료"<<endl;
}

void ShowAllAccount()
{
    auto iter = accMap.begin();
    while (iter != accMap.end()) {
        auto second = iter->second;
        cout<<"###"<<endl;
        cout<<"계좌ID: "<<second.id<<endl;
        cout<<"이름: "<<second.name<<endl;
        cout<<"잔액: "<<second.balance<<endl;
        cout<<"###"<<endl;
        iter++;
    }
}
