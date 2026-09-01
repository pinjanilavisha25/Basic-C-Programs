#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,-2,3,-4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    int negativeCount=0;
    for(int i=0;i<size;i++){
        if(arr[i]<0){
            negativeCount++;
        }
    }
    cout<<"The number of negative elements in the array is:"<<negativeCount<<endl;
    return 0;
}