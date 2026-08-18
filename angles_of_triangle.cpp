#include<iostream>
using namespace std;
int main(){
    float a1,a2,a3;
    cout<<"Enter the 3 angles of the triangle";
    cin>>a1>>a2>>a3;
    if((a1+a2+a3)==180){
        cout<<"It is a valid triangle";
    }
    else{
         cout<<"It is not a valid triangle";
    }
    return 0;
}