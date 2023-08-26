// C++ program to show Overload Constructor Example.

#include<iostream>
using namespace std;

class Overload
{
    private:
        int a;
        double b ;
        char c;
    public:
        Overload(int x)
        {
            a = x;
            b = 0;
            c = 0;
        }
        Overload(double x)
        {
            a = 0;
            b = x;
            c = 0;
        }
        Overload(char x)
        {
            a = 0;
            b = 0;
            c = x;
        }
        Overload(int x1, double x2, char x3)
        {
            a = x1;
            b = x2;
            c = x3;
        }
        void print()
        {
            cout<<"This is a overload constructor example and constructor is called. "<<endl;
            cout<<"The value of a is: "<<a<<endl;
            cout<<"The value of b is: "<<b<<endl;
            cout<<"The value of c is: "<<c<<endl;
        }
};

int main()
{
    Overload o1(15);
    Overload o2(98.5);
    Overload o3('C');
    Overload o4(15, 98.5, 'C');
    o1.print();
    o2.print();
    o3.print();
    o4.print();
    return 0;
}