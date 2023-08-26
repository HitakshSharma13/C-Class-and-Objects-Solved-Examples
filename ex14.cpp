// C++ program to find largest among 2 numbers using Class.

#include<iostream>
using namespace std;

class Largest
{
private:
    int a, b;
public:
    void input();
    void calc();
};

void Largest:: input()
{
    cout<<"The value of a is: ";
    cin>>a;
    cout<<"The value of b is: ";
    cin>>b;
}

void Largest::calc()
{
    if(a>b)
    {
        cout<<"The largest among two numbers a and b is a and the value is: "<<a<<endl;
    }
    else
    {
        cout<<"The largest among two numbers a and b is b and the value is: "<<b<<endl;
    }
    
}



int main()
{
    Largest l;
    l.input();
    l.calc();
    return 0;
}