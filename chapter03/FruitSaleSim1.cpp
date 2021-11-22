#include <iostream>

using namespace std;

class FuritSeller
{
    private:
        int APPLE_PRICE;
        int numOfApples;
        int myMoney;
    public:
        void InitMembers(int price, int num, int money)
        {
            APPLE_PRICE = price;
            numOfApples = num;
            myMoney = money;
        }
        int SaleApples(int money)
        {
            int num = money / APPLE_PRICE;
            numOfApples -= num;
            myMoney += money;
            return num;
        }
        void ShowSaleResult()
        {
            cout<<"남은사과: "<<numOfApples<<endl;
            cout<<"판매수익: "<<myMoney<<endl;
        }
};

class FruitBuyer
{
    int myMoney;
    int numOfApples;

    public:
        void InitMembers(int money)
        {
            myMoney = money;
            numOfApples = 0;
        }
        void BuyApples(FuritSeller &seller, int money)
        {
            numOfApples += seller.SaleApples(money);
            myMoney -= money;
        }
        void ShowBuyResult()
        {
            cout<<"현재 잔액: "<<myMoney<<endl;
            cout<<"사과 개수: "<<numOfApples<<endl;
        }
};

int main(void)
{
    FuritSeller seller;
    seller.InitMembers(1000, 20, 0);
    FruitBuyer buyer;
    buyer.InitMembers(5000);
    buyer.BuyApples(seller, 2000);
    cout<<"Seller"<<endl;
    seller.ShowSaleResult();
    cout<<"Buyer"<<endl;
    buyer.ShowBuyResult();
}
