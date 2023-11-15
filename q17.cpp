#include <iostream>
using namespace std;
int main(){
    int res = 0;
    int a[5];
    cout<<"enter elements"<<endl;
    for(int i = 0; i < 5; i++){
        cin>>a[i];
    };
    for(int i = 0; i < 5; i++){
        res = res + a[i];
    };
  res = res/5;
  cout<<res<<endl;
  return 0;
}