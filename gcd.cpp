#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    int temp;
    cout<<"Enter two numbers:";
    cin>>n1>>n2;
    while(n2!=0){
        temp=n2;
        n2=n1%n2;
        n1=temp;

    }
    cout<<"The GCD of two numbers is:"<<n1<<endl;
    return 0;
}