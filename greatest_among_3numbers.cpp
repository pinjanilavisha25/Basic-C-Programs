#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the 3 numbers:";
    cin>>a>>b>>c;
    if(a>b and a>c){
        cout<<"A is greatest";
    }
    else if (b>c and b>a)
    {
         cout<<"B is greatest";
    }
    else{
         cout<<"C is greatest";
    }
    return 0;
    
}