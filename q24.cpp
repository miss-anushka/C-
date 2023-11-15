#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ofstream fout;
    ifstream fin;
    fout.open("hello1.bin",ios::binary);
    fout<<"hello world, I am Anushka"<<endl;
    fin.open("hello1.bin",ios::binary);
    char ch = fin.get();
    while(!fin.eof()){
        cout<<ch;
        ch = fin.get();
    }
    return 0;
}