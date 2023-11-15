#include <iostream>
using namespace std;
class Person{
    public:
    void name(){
        cout<<"name"<<endl;
    }
};
class Employee{
    public:
    void salary(){
        cout<<"salary"<<endl;
    }
};
class Manager:public Person,public Employee{

};
int main(){
    Manager m;
    m.name();
    m.salary();
}