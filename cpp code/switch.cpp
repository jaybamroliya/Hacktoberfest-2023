# include<iostream>
using namespace std;
int main(){
    int a,b;
    char op;
    cout<<"enter the operater you want to use(+,-,*,/)\n";
    cin>>op;
    cout<<"enter the value of a and b\n";
    cin>>a>>b;
    
    switch(op)
    {
        case '+':
       cout<<a<<"+"<<b <<"="<<a+b;
        break;
        case '-':
        cout<<a<<"-"<<b<<"=" <<a-b;
        break;
        case '*':
        cout<<a<<"*"<<b<<"="<<a*b;
        break;
        case '/':
        cout<<a<<"/"<<b<<"="<<a/b;
        break;
        default :
        cout<<"invalid output";
        break;

    }return 0;

}