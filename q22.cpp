#include <iostream>
using namespace std;
class rectangle{
public:
void fun(){
    cout<<"class rectangle"<<endl;
}
};
class square: public rectangle{
    public:
    void fun1(){
        cout<<"class square"<<endl;
    }
};
int main(){
    square obj;
    obj.fun();
    obj.fun1();
    return 0;
}