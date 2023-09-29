#include<iostream>
using namespace std;


int main(){
    int a=25;
    cout<< "the value of A was:"<<a;
    a=45;
    cout<<"\nthe value of A is:"<<a;
    return 0;
    //constant value of variable
    const  int b=36;
    cout<<"the value of a is:"<<a;
    b=34; //this line will give error
    cout<<"value of B is:"<<b;

    return 0;

}