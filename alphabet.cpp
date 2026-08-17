#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<" Enter a character:";
    cin>>ch;
    if((ch>='A' and ch<='Z') or (ch>='a' and ch<='z')){
         cout<<"It is a alphabet";
    }
    else{
        cout<<"It is not  alphabet";
    }
    return 0;
}