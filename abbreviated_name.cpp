#include<iostream>
#include<string>
using namespace std;
int main(){
    string fname,mname,lname;
    cout<<"Enter your first name:";
    cin>>fname;
    cout<<"Enter your middle  name:";
    cin>>mname;
    cout<<"Enter your last name:";
    cin>>lname;
    cout<<"The person's  name in abbreviated form is:";
    cout<<fname[0]<<"."<<mname[0]<<"."<<lname;
    return 0;


}