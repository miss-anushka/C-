#include <iostream>
using namespace std;
class B;
class A{
    int money;
    public:
    void setter(int money){
        this->money = money;
    }
    friend void sum(A,B);
};
class B{
    int money;
    public:
    void setter(int money){
        this->money = money;
    }
    friend void sum(A,B);

};
 void sum(A o1, B o2){
    cout<<o1.money+o2.money;
};
int main(){
    A o1;
    B o2;
    o1.setter(2);
    o2.setter(3);
    sum(o1,o2);
    return 0;
}