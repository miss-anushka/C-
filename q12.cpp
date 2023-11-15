#include <iostream>
using namespace std;
class A{
    public:
    A(){
        cout<<"class A"<<endl;
    }
};
class B:public A{
    public:
    B(){
        cout<<"class B"<<endl;
    }

};
int main(){
    B obj;
    return 0;
}