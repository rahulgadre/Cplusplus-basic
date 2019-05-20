#include "Telephone.h"
#include <iostream>
#include <iomanip>

using namespace std;

Telephone::Telephone()
{
    m_area = 0;
    m_num = 0;
}

Telephone::Telephone(string name,int area,int num)
{
         m_name = name;
         m_area = area;
         m_num  = num;
}

Telephone::~Telephone()
{
    //dtor
}

string Telephone::getName()
{
    return m_name;
}

void Telephone::setName(string val)
{
    m_name = val;

}

int Telephone::getArea()
{
    return m_area;
}

void Telephone::setArea(int val)
{
    m_area = val;
}

int Telephone::getNum()
{
    return m_num;
}
void Telephone::setNum(int val)
{
    m_num = val;
}

void Telephone::display()
{
    cout << "Contact Information"<<endl;
    cout << "Name: "<< getName() <<"   "<<"Number: "<<getArea()<<"-"<<getNum()<<endl;
}
