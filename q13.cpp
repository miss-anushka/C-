#include <iostream>
using namespace std;
int main(){
    int *val = new int;
    cout<<"enter a value"<<endl;
    cin>>*val;
    cout<<*val;
    return 0;
}