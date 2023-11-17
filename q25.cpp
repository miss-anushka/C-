#include <iostream>
#include <fstream>
#include <stdexcept>
using namespace std;
int main(){
ifstream fin;
fin.open("hello.txt");
try{
    if(!fin.is_open()){
        throw 10;
    }
    else{
char ch = fin.get();
while(!fin.eof()){
    cout<<ch;
    ch = fin.get();
}
    }
}
catch(...){
    cout<<"error: file not opened"<<endl;
}
fin.close();
return 0;
}
