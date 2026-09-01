#include<iostream>
using namespace std;
int main(){
    int arr[8]={1,2,3,4,5,6,7,8};
    int size=sizeof(arr)/sizeof(arr[0]);
    int oddCount=0;
    int evenCount=0;
    for(int i=0;i<size;i++){
        if(arr[i]%2==0){
            evenCount++;
        
        }
        else{
            oddCount++;
        }
    }
    cout<<"Total Even Elements"<<evenCount<<endl;
    cout<<"Total Odd Elements"<<oddCount<<endl;
    return 0;
}