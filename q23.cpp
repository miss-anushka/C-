#include <iostream>
#include <stdexcept>
using namespace std;
int main(){
try{
    cout<<"enter numerator"<<endl;
    int n;
    cin>>n;
    cout<<"enter denomenator"<<endl;
    int d;
    cin>>d;
    if(d == 0){
        throw 10;
    }
    else{
        cout<<n/d<<endl;
    }
}
catch(...){
    cout<<"error:cant divide by 0"<<endl;
}
return 0;
}