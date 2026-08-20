#include<iostream>
using namespace std;
int main(){
    int terms;
    cout<<"Enter the number of terms:";
    cin>>terms;
    if(terms<=0){
        cout<<"Enter positive number of terms:";
    }
    int a=0,b=1,c;
    cout<<"Fibonacci series:";
    if(terms==1){
            cout<<a<<endl;
            
        }

        if (terms==2)
        {
             cout<<b<<endl;
             
        }
    cout<<a<<endl;
    cout<<b<<endl;
    for (int i = 3; i <= terms; i++)
    {
        

        c=a+b;
        a=b;
        b=c;
        cout<<c<<endl;
        cout<<endl;
        


        
    }
    return 0;
} 