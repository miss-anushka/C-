#include <iostream>
using namespace std;
class Vehicle{
    public:
    void start(){
        cout<<"started"<<endl;
    }
};
class car:public Vehicle{
    public:
    void horn(){
        cout<<"horn"<<endl;
    }
};
class bike:public car{
    public:
    void gear(){
        cout<<"shift gear"<<endl;
    }
};
int main(){
  bike obj;
  obj.horn();
  obj.gear();
  obj.start();
  return 0;

}