#include <iostream>
using namespace std;

struct person
{
    char name[100];
    int age;
    double salary;
};

int main()
{

    for (int i = 0; i <= 19; i++)
    {

        person pi;
        cout << "person details" << endl
             << "enter person name:  ";
        cin.getline(pi.name, 100);
        cout << "enter age: ";
        cin >> pi.age;
        cout << endl
             << "enter salary: ";
        cin >> pi.salary;

        cout << "personal details are as follows:" << endl;
        cout << "person name: " << pi.name << endl;
        cout << "person age:  " << pi.age << endl;
        cout << "person salary  " << pi.salary << endl;
        cout << "thank you. " << endl;
    }

    return 0;
}
