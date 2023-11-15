#include <iostream>
using namespace std;
class Shape{
virtual void area() = 0;
};
class rectangle:public Shape{
    int l,b;
    public:
    rectangle(int l ,int b){
        this->l = l;
        this->b = b;
    }
    void area(){
        int area = l*b;
        cout<<area<<endl;
    };
};
class circle: public Shape{
    int r;
    public:
    circle(int r){
        this->r = r;
    }
    void area(){
        float area = r*r*3.141;
        cout<<area<<endl;
    }
};
int main(){
Shape *ptr;
rectangle obj(1,4);
circle obj2(2);
obj.area();
obj2.area();
return 0;
}