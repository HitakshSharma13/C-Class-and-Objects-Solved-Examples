// C++ program to find Square of float and integer a Number using Inline function.

#include<iostream>
using namespace std;

class Square
{
    private:
    int a, b;
    float x, y;
    public:
    void input();
    void calc();
    void display();
};
inline void Square:: input()
{
    cout<<"Enter the value of integer number is: ";
    cin>>a;
    cout<<"Enter the value of float number is: ";
    cin>>x;
}
inline void Square::calc()
{
    b = a*a;
    y = x*x;
}
inline void Square::display()
{
    cout<<"Square of integer number is: "<<b<<endl;
    cout<<"Square of float number is: "<<y<<endl;
}

int main()
{
    Square s;
    s.input();
    s.calc();
    s.display();
    return 0;
}