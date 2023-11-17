#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter a size"<<endl;
    cin>>a;
    int *arr = new int[a];
    cout<<"enter elements"<<endl;
    for(int i = 0; i < a; i++){
        cin>>arr[i];
    };
    int res = 0;
    for(int i = 0; i < a; i++){
        res = res + arr[i];
    }
    cout<<"sum is "<<res<<endl;
    cout<<"diplaying array elements"<<endl;
    for(int i = 0; i < a; i++){
        cout<<arr[i]<<endl;
    };
    delete[] arr;
    return 0;

}
