// C++ program to calculate Volume of Cube using Constructor & destructor.

#include<iostream>
#include<cmath>
using namespace std;


class Cube
{
    private:
        int a,b;
    public:
        Cube(void); // Constructor
        void print()
        {
            cout<<"This a constructor."<<endl;
            cout<<"The Volume of Cube a is: "<<(a*a*a)<<endl;
            cout<<"The Volume of Cube b is: "<<(b*b*b)<<endl;
        }
        ~Cube(void)//destructor
        {
            cout<<"This a destructor."<<endl;
            cout<<"The is the destructor for a is: "<<a<<endl;
            a--;
            cout<<"The is the destructor for b is: "<<b<<endl;
            b--;
        }
            
};
Cube::Cube(void)
{
    a = 5;
    b = 9;
}

int main()
{
    Cube c1;
    c1.print();
    return 0;
}


