#include<iostream>
using namespace std;
int main(){
   double principal,rate,time,si;
   cout<<"Enter the principal amount:";
   cin>>principal;
   cout<<"Enter the rate:";
   cin>>rate;
   cout<<"Enter the time:";
   cin>>time;
   si=(principal*time*rate)/100;
   cout<<"The simple interest for the given data is:"<<si<<endl;
   return 0;

}