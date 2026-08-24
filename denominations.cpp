#include<iostream>
using namespace std;
int main(){
    int amount;
    cout<<"Enter the amount in dollars";
    cin>>amount;
    int bills50=amount/50;
    amount=amount%50;
    cout<<"50$ bills"<<bills50<<endl;

    int bills20=amount/20;
    amount=amount%20;
    cout<<"20$ bills"<<bills20<<endl;

    int bills10=amount/10;
    amount=amount%10;
    cout<<"10$ bills"<<bills10<<endl;

    int bills5=amount/5;
    amount=amount%5;
    cout<<"5$ bills"<<bills20<<endl;

    cout<<"$1bills"<<amount<<endl;
    return 0;

}