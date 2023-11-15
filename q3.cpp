#include <iostream>
using namespace std;
void area(int l,int b){
    int area = l*b;
    cout<<area<<endl;
};

void area(float r){
    float area = r*r*3.141;
    cout<<area<<endl;
};
int main(){
    area(1,2);
    area(2.00);
    return 0;
}