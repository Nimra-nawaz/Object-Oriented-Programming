#include<iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter two numbers to be swapped : ";
    cin >> a >> b;
    b = a + b;
    a = b - a;
    b = b - a;
    cout << "The two numbers after swapping become :" << endl;
    cout << "Value of a : " << a << endl;
    cout << "Value of b : " << b << endl;
    return 0;
}
