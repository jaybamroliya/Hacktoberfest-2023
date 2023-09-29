#include <iostream>
using namespace std;

int main()
{
    // What is pointer--->data type which hold the address of other data type
    int a = 3;
    int *b = &a;
    cout << "The address of a is:" << &a;
    cout << "\nThe address of b is:" << b;
    //&--> gives the address of operator
    // *--> deferrence operator
    cout << "\nThe value at operator b is:" << *b;

    // If we are using * then we are calling the value anf if & is used then It is calling its address
    return 0;
}