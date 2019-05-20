#ifndef TELEPHONE_H
#define TELEPHONE_H
#include <string>

using namespace std;

class Telephone
{
      private:
        string m_name;
        int m_area;
        int m_num;
    public:
        Telephone();
        Telephone(string name, int area,int num);
        virtual ~Telephone();

        string getName();
        void setName(string val);
        int getArea();
        void setArea(int val);
        int getNum();
        void setNum(int val);
        void display();


};

#endif // TELEPHONE_H
