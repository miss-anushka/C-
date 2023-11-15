#include <iostream>
using namespace std;
class parameters{
    int l,b;
    public:
    parameters(int l,int b){
        this->l = l;
        this->b = b;
    };
    void area(){
        cout<<l*b<<endl;
    }
    void peri(){
        cout<<2*(l+b)<<endl;
    }
};
int main(){
parameters obj(1,2);
obj.area();
obj.peri();
return 0;
}