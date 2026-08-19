#include<iostream>
using namespace std;
int main(){
    int num, reversed_num;
    reversed_num=0;
    cout<<"Enter a number";
    cin>>num;
    while (num>0)
    {
        int remainder=num%10;
        reversed_num=reversed_num*10+remainder; 
        num=num/10;
    }
    
    cout<<"Reversed Num:"<<reversed_num<<endl;
    return 0;
}