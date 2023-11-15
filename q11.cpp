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
    cout<<"diplaying array elements"<<endl;
    for(int i = 0; i < a; i++){
        cout<<arr[i]<<endl;
    };
    delete[] arr;
    return 0;

}