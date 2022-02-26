/*an enumerated data types is a user defined type which provides a way for attaching names to numbers
thereby increasing comprehensibility of code*/
/*this facility provides an alternative means for creating symbolic constants*/
#include <iostream>
using namespace std;
int main()
{
    enum shape
    {
        circle,
        square,
        triangle
    };
    enum color
    {
        red,
        blue,
        green,
        yellow
    };
    enum position
    {
        off,
        on
    };

    shape ellipse;    // ellipse is of type shape
    color background; // background is of type color
    background = yellow;
    cout << background;
    return 0;
}