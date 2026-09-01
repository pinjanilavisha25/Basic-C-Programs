#include<iostream>
using namespace std;
int max(int arr[],int size){
    if (size==1){
        return arr[0];
    }
    int maxi=max(arr,size-1);
    if(arr[size-1]>maxi){
        return arr[size-1];
    }
    else{
        return maxi;
    }
}


int min(int arr[],int size){
    if (size==1){
        return arr[0];
    }
    int mini=min(arr,size-1);
    if(arr[size-1]<mini){
        return arr[size-1];
    }
    else{
        return mini;
    }
}




    

int main(){
    int array[5]={1,2,3,4,5};
    int size=sizeof(array)/sizeof(array[0]);
    int maximum=max(array,size);
    int minimum=min(array,size);
    cout<<"The maximum element of the array is:"<<maximum<<endl;
    cout<<"The minimum element of the array is:"<<minimum<<endl;
    return 0;
}