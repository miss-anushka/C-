#include <iostream>
using namespace std;
class fact{
    public:
    fact(int n){
        int res = 1;
        for(int i = 1; i < n; i++){
            res = res *i;
        };
        cout<<res<<endl;
    }
};
int main(){
    fact obj(1);
return 0;
}