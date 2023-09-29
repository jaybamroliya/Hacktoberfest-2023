#include<iostream>
using namespace std;

struct employee{
    int eid;
    char favchar;
    float salery;
};
int main(){
    struct employee varun;
    varun.eid=55;
    varun.favchar='v';
    varun.salery=1200000;

struct employee Harish;
Harish.eid=56;
Harish.favchar='h';
Harish.salery= 1200000;


cout<<"The value is"<<varun.eid<<endl;
cout<<"the value is"<<Harish.favchar<<endl;
cout<<"the value is"<<varun.salery<<endl;


return 0;
}