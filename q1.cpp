#include <iostream>
using namespace std;
class rectangle{
    int l,b;
    public:
    void area(int l,int b){
        this->b = b;
        this->l = l;
        int ar = l*b;
        cout<<ar;
    }
};
int main(){
    rectangle obj;
    int l,b;
cout<<"enter l and b"<<endl;
cin>>l>>b;
obj.area(l,b);
return 0;

}