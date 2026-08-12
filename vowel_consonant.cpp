#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<" Enter a character:";
    cin>>ch;
    if(isalpha(ch)==0){
        cout<<"It is not a alphabet";
    }
    

    else if (ch=='A' or ch=='E' or ch=='I' or ch=='O' or ch=='U' or ch=='a' or ch=='e' or ch=='i' or ch=='o' or ch=='u'){
       
    
         cout<<"It is a vowel";
    }
    
    else{
        cout<<"It is a consonant";
    }
    return 0;
}