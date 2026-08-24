#include<iostream>
using namespace std;
int main(){
    int originalNum,num,remainder,sum=0;
    cout<<"Enter a number";
    cin>>originalNum;
    num=originalNum;
    while(originalNum>0){
        remainder=originalNum%10;
        sum+=remainder*remainder*remainder;
        originalNum /= 10;
    }
    if(sum==num){
        cout<<"It is an Armstrong Number";
    }
    else{
     cout<<"It is not an Armstrong Number";   
    }
    return 0;
}