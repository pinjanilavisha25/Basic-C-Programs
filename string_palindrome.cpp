#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string:";
    cin>>str;
    int len=str.length();
    bool isPalindrome=true;
    for(int i=0;i<len/2;i++){
        if(str[i]!=str[len-i-1]){
            isPalindrome=false;
            break;
        }
    }
    if(isPalindrome){
        cout<<"The string is palindrome";
    }
    else{
        
        cout<<"The string is not palindrome";
    }
    return 0;

}