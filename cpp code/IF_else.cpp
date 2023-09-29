#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter age\n";
    cin>>age;
    if(age<18){
        cout<<"You are eligible for club";
    }
    else if(age==18){
        cout<<"You need to wait for one more year";
    }
    else{
        cout<<"you are eligible";
    }
    return 0;
}