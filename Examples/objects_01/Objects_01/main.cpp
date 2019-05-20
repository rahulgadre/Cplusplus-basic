#include <iostream>
#include "Box.h"

using namespace std;

const int BOX_COUNT = 5;

int main()
{
    Box box1(3, 4, 5);
    Box box2(10, 10.5, 3.30);

    Box box3;

    double height, length, width;

    cout << "Please enter height of the next box: ";
    cin  >> height;

    cout << "Please enter length of the next box: ";
    cin  >> length;

    cout << "Please enter width of the next box:  ";
    cin  >> width;

    box3.setHeight(height);
    box3.setWidth(width);
    box3.setLength(length);

    box1.display();
    box2.display();
    box3.display();

    Box boxArray[BOX_COUNT];
    boxArray[0].setHeight(box1.getHeight());
    boxArray[0].setWidth(box1.getWidth());
    boxArray[0].setLength(box1.getLength());

    boxArray[1] = box2;   // *** DANGEROUS!!!! DON'T DO!!!!

    for (int i = 2; i < BOX_COUNT; i++)
    {
        boxArray[i].setHeight(i * 2);
        boxArray[i].setWidth(i * 3);
        boxArray[i].setLength(i * 4);
    }

    cout << endl << endl << "=========================================" << endl << endl;

    for (int i = 0; i < BOX_COUNT; i++)
    {
        boxArray[i].display();
    }

}
