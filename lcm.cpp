#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    cout<<"Enter two numbers:";
    cin>>n1>>n2;
    int max_sum=(n1>n2)?n1:n2;
    while(true){
        if(max_sum%n1==0 && max_sum%n2==0){
            
            
            cout<<"The LCM of two numbers is:"<<max_sum<<endl;
            break;
        }
        max_sum++;
    }
    return 0;
}
