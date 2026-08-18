#include<iostream>
using namespace std;
int main(){
    float s1,s2,s3;
    cout<<"Enter the 3 sides of the triangle:";
    cin>>s1>>s2>>s3;
    if((s1+s2>s3) && (s2+s3>s1) && (s3+s1>s2)){
        cout<<"It is a valid triangle";
    }
    else{
        cout<<"It is not a valid triangle";
    }
    return 0;
}