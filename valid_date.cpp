#include<iostream>
using namespace std;
int main(){
    int day,month,year;
    cout<<"Enter Day:";
    cin>>day;
    cout<<"Enter Month:";
    cin>>month;
    cout<<"Enter Year:";
    cin>>year;

    //Step 1: Check basic year, month, and day boundaries
    if(year<1 || month<1 || month>12 || day<1){
        cout<<"Invalid Date!"<<endl;
    }

    //Step 2: Handle February leap years
    if(month==2){
        bool isLeap=(year%4==0);
    
        if(isLeap && day<=29){
            cout<<"Valid Date"<<endl;
        }
        else if(!isLeap && day<=28){
            cout<<"Valid Date"<<endl;
        }
        else{
            cout<<"Invalid Date"<<endl;

        }
    }

    //Step3: Handle 30 day months
    else if(month==4 || month==6 || month==9 || month==11){
        if(day<=30){
             cout<<"Valid Date"<<endl;
        }
        else{
             cout<<"Invalid Date"<<endl;
        }
     }
        
     //Step4 Handle the other months
     else{
        if(day<=31){
             cout<<"Valid Date"<<endl;
        }
        else{
             cout<<"Invalid Date"<<endl;
        }
     }
    return 0;
 }