#include <iostream> //header file
using namespace std; //namespace
void fun(); //function prototype
class A; //class prototype
int main(){
    cout<<"hello,world"<<endl; //body of program
    fun();
    return 0;
}
void fun(){
    cout<<"fun called"<<endl;
    A obj;// declaring class object
    obj.call(); //calling member function
};
class A{
public:                  //declarations 
void call(){
    cout<<"class A"<<endl;
}
};
