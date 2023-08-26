// C++ program to find Factorial of a number using class.

#include <iostream>
using namespace std;

class factorial
{
private:
    int a, factorial = 1;

public:
    void input_Data();
    void calc();
    void display();
};
void factorial ::input_Data()
{
    cout << "Enter the value of a is: ";
    cin >> a;
}

void factorial ::calc()
{
    for (int i = 1; i <= a; i++)
    {
        factorial = factorial * i;
    }
}

void factorial ::display()
{
    cout << "The value of factorial " << a << " is:" << factorial << endl;
}
int main()
{
    factorial f1;
    f1.input_Data();
    f1.calc();
    f1.display();
    return 0;
}