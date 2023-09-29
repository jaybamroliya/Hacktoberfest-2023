#include<iostream>
using namespace std;
//function prototype --->this is used to inform compiler that when you will mve forward you will get a function of name

int multiply(int x,int y);
int main(){
    int num1,num2;
    cout<<"enter first number"<<endl;
    cin>>num1;
    cout<<"enter second number"<<endl;
    cin>>num2;
    cout<<"product of two number is "<<multiply(num1,num2);
    return 0;


}
int multiply(int x,int y){
    int c=x*y;
    return c;
}