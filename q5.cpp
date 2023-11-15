#include <iostream>
using namespace std;
class A{
    public:
    
   virtual void fun(){
        cout<<"class A"<<endl;
    }
    void (A::*ptr)() = &A::fun;
    
};
class B:public A{
    public:
    void fun(){
        cout<<"class B"<<endl;
    }
};
int main(){
    B obj;
    (obj.*obj.ptr)();
    return 0;
}