#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string:";
    cin>>str;
    int len=str.length();
    for(int i=0;i<len;i++){
        str[i]='*';

    }
    cout<<"Converted String"<<str<<endl;
    return 0;
}