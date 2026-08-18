#include<iostream>
using namespace std;
int main(){
    float cp,sp;
    cout<<"Enter the cost price:";
    cin>>cp;
    cout<<"Enter the selling price:";
    cin>>sp;
    if(sp>cp){
        cout<<"Profit";
    }
    if(sp<cp){
        cout<<"Loss";
    }
    return 0;
}