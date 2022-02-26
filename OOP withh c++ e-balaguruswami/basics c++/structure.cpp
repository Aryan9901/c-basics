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
    person p1;
    cout << "person details" << endl
         << "enter person name:  ";
    cin.getline(p1.name, 100);
    cout << "enter age: ";
    cin >> p1.age;
    cout << endl
         << "enter salary: ";
    cin >> p1.salary;

    cout << "personal details are as follows:" << endl;
    cout << "person name: " << p1.name << endl;
    cout << "person age:  " << p1.age << endl;
    cout << "person salary  " << p1.salary << endl;
    cout << "thank you. " << endl;

    return 0;
}
