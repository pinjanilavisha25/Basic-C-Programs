#include<iostream>
using namespace std;
 //Function to read elements of an array
    void readElements(int arr[],int index,int size){
        if(index==size){
            return;
        }
        cin>>arr[index];
    
    readElements(arr,index+1,size);
    }

 //Function to print elements of an array
    void printElements(int arr[],int index,int size){
        if(index==size){
            return;
        }
        cout<<arr[index]<<endl;
    
    printElements(arr,index+1,size);
    }
int main(){
    int size;
    cout<<"Enter the number of elements";
    cin>>size;
    int arr[50];
    readElements(arr,0,size);
    printElements(arr,0,size);
    return 0;

}