#include <iostream>
using namespace std;

class FruitSeller
{
    private:
        const int APPLE_PRICE;
        int numOfApples;
        int myMoney;
    public:
        FruitSeller(int price, int num, int money) : APPLE_PRICE(price), numOfApples(num), myMoney(money) {}
        int SaleApples(int money)
        {
            int num = money / APPLE_PRICE;
            numOfApples -= num;
            myMoney += money;
            return num;
        }
        void ShowSalesResult() const
        {
            cout<<"remain apple:"<<numOfApples<<endl;
            cout<<"margin:"<<myMoney<<endl;
        }
};

class FruitBuyer
{
    private:
        int myMoney;
        int numOfApples;
    public:
        FruitBuyer(int money)
        {
            myMoney = money;
            numOfApples = 0;
        }
        void BuyApples(FruitSeller &seller, int money)
        {
            numOfApples += seller.SaleApples(money);
            myMoney -= money;
        }
        void ShowbuyResult() const
        {
            cout<<"balance:"<<myMoney<<endl;
            cout<<"apple:"<<numOfApples<<endl;
        }
};

int main(void)
{
    FruitSeller seller(1000, 20, 0);
    FruitBuyer buyer(5000);
    buyer.BuyApples(seller, 2000);
    seller.ShowSalesResult();
    buyer.ShowbuyResult();
}
