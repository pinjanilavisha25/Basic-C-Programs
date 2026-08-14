#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    if((n%5==0) and (n%11==0)){
        cout<<"Number is divisible by both 5 and 11";
    
    }
         
    if(n%5==0){
        cout<<"Number is divisible by 5";
    }
    if(n%11==0){
          cout<<"Number is divisible by 11";
    }
    
    return 0;

}