#include <iostream>
using namespace std;
class A{
    int data;
    public:
    A operator+(A obj){
        A temp;
        temp.data = obj.data + data;
        return temp;
    }
    void display(){
        cout<<data<<endl;
    }
    void setter(int data){
        this->data = data;
    }
};
int main(){
    A o1,o2,o3;
    o1.setter(1);
    o2.setter(2);
    o3 = o1+o2;
    o3.display();
    return 0;

}
