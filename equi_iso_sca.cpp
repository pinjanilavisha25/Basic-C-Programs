#include<iostream>
using namespace std;
int main(){
    int s1,s2,s3;
    cout<<"Enter the lengths of the sides of the triangle:";
    cin>>s1>>s2>>s3;
    if(s1==s2==s3){
        cout<<"It is an equilateral triangle";
    }
    if ((s1==s2!=s3) and (s2==s3!=s1) and (s3==s1!=s2))

    {
        cout<<"It is an isoceles triangle";
    }
    if(s1!=s2!=s3){
        cout<<"It is an scalene triangle";
    }
    return 0;
}