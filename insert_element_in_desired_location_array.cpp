#include<iostream>
using namespace std;
int main(){
    int arr[10]={10,20,30,40,50};
    int size=5;
    int index=2;
    int num=99;
    for(int i=size;i>index;i--){
        arr[i]=arr[i-1];
    }
    arr[index]=num;
    size++;
    cout<<"The Elements of the array are:";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
    return 0;

}