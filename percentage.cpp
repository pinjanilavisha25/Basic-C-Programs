#include<iostream>
using namespace std;
int main(){
    float s1,s2,s3,s4,s5;
    float total,percentage;
    cout<<"Enter the marks of 5 subjects";
    cin>>s1>>s2>>s3>>s4>>s5;
    total=s1+s2+s3+s4+s5;
    percentage=total/5;
    cout<<"The percentage of 5 subjects is:"<<percentage<<endl;
    return 0;
}