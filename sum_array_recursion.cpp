#include<iostream>
using namespace std;
int sum(int arr[],int size){
    if (size==0){
        return 0;
    }
    return arr[size-1]+sum(arr,size-1);
}
int main(){
    int array[8]={1,2,3,4,5,6,7,8};
    int size=sizeof(array)/sizeof(array[0]);
    int totalSum=sum(array,size);
    cout<<"The sum of elements of the array is:"<<totalSum<<endl;
    return 0;
}