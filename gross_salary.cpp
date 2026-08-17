#include <iostream>
using namespace std;
int main(){
    float basic, da ,hra ,gross;
    cout<<"Enter your basic salary:";
    cin>>basic;
    //Allowance: da=40%, hra=20%
    da= basic*0.40;
    hra= basic*0.20;
    gross=basic+da+hra;
    cout<<"The gross salary is:"<<gross<<endl;
    return 0;
}