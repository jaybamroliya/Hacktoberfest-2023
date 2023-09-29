#include<iostream>
#include<iomanip>
using namespace std;
 int main(){
     int a=2,b=23,c=345,d=5555;
     cout<<"The value of a is:"<<a;
     cout<<"\nthe value of B is:"<<b;
     cout<<"\nthe value of c is:"<<c;
     cout<<"\nThe value of d is:"<<d;

     //using manipulator
     cout<<"\nThe value of a is"<<setw(8)<<a;
     cout<<"\nThe value of b is:"<<setw(8)<<b;
     cout<<"\nThe value of C is"<<setw(8)<<c;
     cout<<"\nThe value of D is"<<setw(8)<<d;

 }