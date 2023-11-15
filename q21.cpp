#include <iostream>
using namespace std;
class Bank{
    int money;
    public:
    Bank(){
        money = 0;
    }
    void deposit(int val){
        money = money + val;
    }
    void withdraw(int val){
        money = money - val;
    }
    void balance(){
        cout<<money<<endl;
    }
};
int main(){
    Bank account;
    account.deposit(1000);
    account.withdraw(200);
    account.balance();
    return 0;

    
}