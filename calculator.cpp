#include<iostream>
using namespace std;
int main(){
    int a,b,choice;
    cout<<"Enter two numbers to perform operations on:";
    cin>>a>>b;
    cout<<"Enter a choice:(1-Add,2-Subtract,3-Multiply,4-Divide)";
    cin>>choice;
    switch (choice)
    {
    case 1:
        cout<<"addition"<<a+b<<endl;
        break;
    case 2:
        cout<<"subtraction"<<a-b<<endl;
        break;
    case 3:
        cout<<"multiplication"<<a*b<<endl;
        break;
     case 4:
        if(b!=0){
            cout<<"division"<<a/b<<endl;
        }
        else{
            cout<<"Division by zero Error";
        }
        
        break;
    
    default:
        cout<<"Invalid operation!!"<<endl;
        break;
    }
    return 0;
}