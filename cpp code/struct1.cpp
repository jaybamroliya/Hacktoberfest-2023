#include <iostream>
using namespace std;
//typedef is used to give a short name to struct  accoring to our convinience
//here we can use pd instead of writing struct personaldetail

typedef struct personaldetail
{
 long long   int mobileNo;
    int salery;
    char favchar;
} pd;

int main()
{
    pd varun;
    varun.mobileNo = 7985981123;
    varun.salery = 1233345;
    varun.favchar = 'v';

    cout << "the mobile number is " <<  varun.mobileNo << endl;
    cout << "the salery is " <<  varun.salery << endl;
    cout << "the fav char is " <<  varun.favchar << endl;

    return 0;
}