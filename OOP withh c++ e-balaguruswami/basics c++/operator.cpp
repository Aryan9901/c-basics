/* use of memory management operators*/
#include <iostream>
using namespace std;

int main()
{
    int *arr;
    int size;

    cout << "enter the size of the integer array: ";
    cin >> size;

    cout << "creating an array of size\n " << size << "..";
    arr = new int[size];

    cout << arr << "\n";

    cout << "\nDynamic allocation of memory for array arr is successful.\n";
    delete arr;
    cout << arr;
    return 0;
}