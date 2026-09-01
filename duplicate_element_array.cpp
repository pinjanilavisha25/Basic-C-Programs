#include<iostream>
using namespace std;
int main(){
    int arr[]={4,2,1,2,4,3,1,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int temp[8];
    int unique_count=0;
    for(int i=0;i<n;i++){
        bool isDuplicate=false;
        for(int j=0;j<unique_count;j++){
            if(arr[i]==temp[j]){
                isDuplicate=true;
                break;
            }
        }
        if(!isDuplicate){
            temp[unique_count]=arr[i];
            unique_count++;
        }
    }
    cout<<"Unique Array:";
    for(int i=0;i<unique_count;i++){
        cout<<temp[i]<<endl;
    }
    return 0;
}