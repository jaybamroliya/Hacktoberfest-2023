#include<iostream>
using namespace std;
int main(){

    int marks[]= {44,55,66,77,88},i=0;
    //printing array using for loop
    for(int i=0;i<5;i++){
        cout<< "\n"<< marks[i];
    }
  
    //printing array using while loop
    cout<<"\nUsing while loop";
    while( i<5){
        cout<< "\n"<< marks[i];
        i++;
    }

    return 0;
}