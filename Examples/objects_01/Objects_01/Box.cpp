#include <iostream>
#include <iomanip>
#include "Box.h"

using namespace std;


Box::Box()
{
    m_width  = 0.0;
    m_length = 0.0;
    m_height = 0.0;
}

Box::Box(double height, double width, double length)
{
    m_width  = width;
    m_length = length;
    m_height = height;
}

Box::~Box()
{
    //dtor
}




double Box::getHeight()
{
    return m_height;
}


void Box::setHeight(double val)
{
    m_height = val;
}


double Box::getWidth()
{
    return m_width;
}


void Box::setWidth(double val)
{
    m_width = val;
}


double Box::getLength()
{
    return m_length;
}


void Box::setLength(double m_length)
{
    this->m_length = m_length;
}


double Box::getVolume()
{
    return getLength() * getWidth() * getHeight();
}


void Box::display()
{
    cout << setprecision(2) << showpoint << fixed;
    cout << endl << "BOX" << endl;
    cout << "==========================================" << endl;
    cout << "Length = " << setw(7) << getLength() << endl;
    cout << "Width  = " << setw(7) << getWidth() << endl;
    cout << "Height = " << setw(7) << getHeight() << endl;
    cout << "Volume = " << setw(7) << getVolume() << endl;
    cout << "==========================================" << endl << endl;
}
