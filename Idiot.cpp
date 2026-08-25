#include<iostream>
using namespace std;
int main(){
    char  name[50];
    cout<<"Enter your name:";
    cin>>name;
    char phrase[]="I AM IDIOT";
    for(int i=0;i<sizeof(phrase);i++){
        name[i]=phrase[i];
    }
    cout<<name<<endl;
    return 0;

}