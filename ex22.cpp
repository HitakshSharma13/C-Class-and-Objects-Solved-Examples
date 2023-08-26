// C++ program to find area of Rectangle using Constructor.

#include<iostream>
using namespace std;

class Area
{
    private:
        float l, b;
    public:
    Area(void);
    void print()
    {
        cout<<"The Area of Rectangle of length "<<l<<" and breadth "<<b<<" is: "<<(l*b)<<endl;
    }
};
Area ::Area(void)
{
    // Area = l*b;
    l = 50.5;
    b = 60.5;
}
int main()
{
    Area a;
    a.print();
    return 0;
}