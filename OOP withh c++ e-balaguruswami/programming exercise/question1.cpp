// write a function using reference variable as arguments to swap the values of a pair of integers
// display number below and after swaping

#include <iostream>
using namespace std;
void swap(int &x, int &y)
{
    int tm = x;
    x = y;
    y = tm;
}

int main()
{
    int a, b;
    cout << "enter a: ";
    cin >> a;
    cout << "enter b: ";
    cin >> b;
    cout << endl
         << "before swapping :-" << endl;
    cout << "a = " << a << " and b = " << b << endl;
    swap(a, b);
    cout << endl
         << "after swapping :-" << endl;
    cout << "a = " << a << " and b = " << b << endl;
    cout << "program terminated with exit(0)";

    return 0;
}