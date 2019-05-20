#include <iostream>
#include "Telephone.h"
#include <string>
#include "Telephone.cpp"

using namespace std;

int main()
{
    Telephone tel;

    string name;
    int area;
    int num;

    cout <<"Enter name: ";
    getline(cin,name);

    cout <<"Enter area code: ";
    cin >> area;

    cout << "Enter number: ";
    cin >> num;

    tel.setName(name);
    tel.setArea(area);
    tel.setNum(num);

    tel.display();

    return 0;
}
