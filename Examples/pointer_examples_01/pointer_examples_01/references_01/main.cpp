#include <iostream>

using namespace std;

int main()
{
    int x;
    int y;

    int& refX = x;
    int& refY = y;

    x = 10;
    y = 5;



    cout << "reference to X contains " << refX << endl;
    cout << "reference to Y contains " << refY << endl;

    refX = refX * 2;

    cout << endl << "X contains " << x << endl;

    cout << "Address of refX is " << &refX << endl;
    cout << "Address of x is " << &x << endl << endl;

    cout << "Address of refY is " << &refY << endl;
    cout << "Address of y is " << &y << endl << endl;


    return 0;
}
