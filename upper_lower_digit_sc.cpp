#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<" Enter a character:";
    cin>>ch;
    if((ch>='A' and ch<='Z') ){
         cout<<"It is a uppercase letter";
    }
    else if(ch>='a' and ch<='z'){
        cout<<"It is a lowercase letter";

    }
    else if (ch>=0 and ch<=9)
    {
        cout<<"It is a digit";
    }
    
    else{
        cout<<"It is a special character";
    }
    return 0;
}