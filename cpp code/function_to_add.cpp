#include <iostream>
using namespace std;
// user input value datatype is written inside function bracket
int sum(int a, int b)
{
    int c = a + b;
    return c;
}
int main()
{
    int num1, num2;
    cout << "Enter first number" << endl;
    cin >> num1;
    cout << "enter second number" << endl;
    cin >> num2;
    cout << "the sum is " << sum(num1, num2);

    return 0;
}