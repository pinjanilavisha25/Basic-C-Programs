#include<iostream>
using namespace std;
int main(){
float radius, area, circumference;
//Input
cout<<"Enter the radius of circle:";
cin>>radius;

//Calculate
area= 3.14*radius*radius;
circumference= 2*3.14*radius;

//Output
cout<<"Area of the circle is:"<< area <<endl;
cout<<"Circumference of the circle is:"<< circumference <<endl;
return 0;

}