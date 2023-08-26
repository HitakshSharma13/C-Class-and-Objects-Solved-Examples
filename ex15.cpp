// C++ program to Swap two numbers using Class.

#include <iostream>
using namespace std;

class Swap
{
private:
    int a, b, swapPointer;

public:
    void input();
    void calc();
    void display();
};
void Swap::input()
{
    cout << "Enter the value of a is: ";
    cin >> a;
    cout << "Enter the value of b is: ";
    cin >> b;
}
void Swap ::calc()
{
    void swapPointer(int *a, int *b);
    {
        int temp = a;
        a = b;
        b = temp;
    }
}
void Swap ::display()
{
    cout << "The swap value is: " << a << "," << b << endl;
}
int main()
{
    Swap s;
    s.input();
    cout << "The value before is: ";
    s.display();

    s.calc();
    cout << "The value after swap is: ";
    s.display();
    return 0;
}