#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter a number:";
    cin>>number;
    int fact=1;
    if(number<0){
        cout<<"Factorial of a negative number does not exist";
    }
    else{
        for( int i=1;i<=number;i++){
            fact=fact*i;
        }
        cout<<"The factorial of the number is :"<<fact<<endl;

    }
    return 0;


}