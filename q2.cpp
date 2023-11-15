#include <iostream>
using namespace std;
class employee{
    string name;
    int salary;
    public:
   void setter(string name,int salary){
        this->name = name;
        this->salary = salary;
    }
    void getter(){
        cout<<name<<salary<<endl;
    }
};
int main(){
    employee obj;
    int s;
    string n;
    cout<<"enter name and salary"<<endl;
    cin>>n>>s;
    obj.setter(n,s);
    obj.getter();
    return 0;

}