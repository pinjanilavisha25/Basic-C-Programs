#include<iostream>
using namespace std;
int main(){
    int original[5]={1,2,3,4,5};
    int size=sizeof(original)/sizeof(original[0]);
    int replica[5];
    for(int i=0;i<size;i++){
        replica[i]=original[i];
    }
    cout<<"Elements in the new array:"<<endl;
     for(int i=0;i<size;i++){
        cout<<replica[i];
    }
    return 0;
}