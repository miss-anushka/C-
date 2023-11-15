#include <iostream>
using namespace std;
class A{
    int data;
    public:
    A operator+(){
        A temp;
        temp.data = data +1;
        return temp;
    }
    void setter(int val){
        data = val;
    }
    void getter(){
        cout<<data<<endl;
    }

};
int main(){
    A o1,o2;
    o1.setter(1);
    o2 = +o1;
    o2.getter();
    return 0;

}