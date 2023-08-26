// C++ program to find Largest of three numbers using Class.

#include<iostream>
using namespace std;

class Largest_Number
{
    private:
    int a, b, c;
    public:
    void input_Data();
    void calculate();
    // void display();
};
void Largest_Number ::input_Data()
{
    cout<<"Enter the value of a, b and c is: ";
    cin>>a>>b>>c;
}
void Largest_Number ::calculate()
{
    if (a>b && a>c)
    {
        cout<<"The value of largest number between a, b and c is a and the value is : "<<a<<endl;
    }
    else if (b>a && b>c)
    {
        cout<<"The value of largest number between a, b and c is b and the value is: "<<b<<endl;
    }
    else
    {
        cout<<"The value of largest number between a, b and c is c and the value is: "<<c<<endl;
    }
}
int main()
{
    Largest_Number l1;
    l1.input_Data();
    l1.calculate();
    return 0;
}