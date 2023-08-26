// C++ program to find Reverse of a Number using Class.

#include <iostream>
using namespace std;

class Reverse
{
private:
    int a, reverse = 0;

public:
    void input_Data();
    void calculate();
    void display();
};
void Reverse ::input_Data()
{
    cout << "Enter the value of a is: ";
    cin >> a;
    // cout<<"Enter the value of b is: ";
    // cin>>b;
}
void Reverse ::calculate()
{
    while (a > 0)
    {
        reverse = (reverse * 10) + (a % 10);
        a = a / 10;
    }
}
void Reverse ::display()
{
    cout << "The reverse of the number is:" << reverse << endl;
}
int main()
{
    Reverse r1;
    r1.input_Data();
    r1.calculate();
    r1.display();
    return 0;
}