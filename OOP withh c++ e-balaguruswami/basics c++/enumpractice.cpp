// enumeration is used to define symbolic constants for a switch statements. example:
#include <iostream>
using namespace std;

enum shape
{
    circle,
    rectangle,
    triangle
};
int main()
{
    cout << "enter shape code: ";
    int code;
    cin >> code;
    while (code >= circle && code <= triangle)
    {
        switch (code)
        {
        case circle:
            cout << "circle" << endl;
            break;
        case rectangle:
            cout << "rectangle" << endl;
            break;
        case triangle:
            cout << "triangle " << endl;
            break;
        }
        cout << " enter shape code: ";
        cin >> code;
    }
    cout << "bye \n";
    return 0;
}