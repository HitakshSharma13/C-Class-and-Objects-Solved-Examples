// C++ program to calculate Volume of Box using Constructor.

#include<iostream>
#include<cmath>
using namespace std;

class Volume
{
    private:
        int l, b, h;
    public:
        Volume(void);
        void print()
        {
            cout<<"The Constructor is used to calculate Volume of box ."<<endl;
            cout<<"The value of the length of the box is: "<<l<<endl;
            cout<<"The value of the width of the box is: "<<b<<endl;
            cout<<"The value of the  height of the box is: "<<h<<endl;
            cout<<"The volume of the box is: "<<(l*b*h)<<" m^3"<<endl;
        }    
};
Volume::Volume()
{
    l = 56;
    b = 98;
    h = 105;
}
int main()
{
    Volume v;
    v.print();
    return 0;
}