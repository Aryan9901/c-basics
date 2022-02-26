#include <iostream>
using namespace std;

int main()
{
    int i = 10, j = 5;
    int modresult = 0;
    int divresult = 0;
    modresult = i % j;
    cout << " modresult is : " << modresult << endl;
    divresult = i / modresult;
    cout << "divresult is : " << divresult << endl;

    return 0;
}