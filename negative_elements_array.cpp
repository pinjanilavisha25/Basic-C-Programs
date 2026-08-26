#include<iostream>
using namespace std;
int main(){
    int arr[]={12,-5,0,-8,24,-3,7,-1};
    int len=sizeof(arr)/sizeof(arr[0]);
    
    for(int i=0;i<len;i++){
        if (arr[i]<0)
        {
            cout<<arr[i]<<endl;
        }
        
    }
    return 0;
}