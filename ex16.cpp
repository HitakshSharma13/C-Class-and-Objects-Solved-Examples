// C++ program for various Mathematical Operations using Switch Case.

#include<iostream>
#include<cmath>
using namespace std;

class Mathematical_Operation
{
    private:
        int a, b;
        char Operation;
    public:
        void input();
        void calc();
};
void Mathematical_Operation::input()
{
    cout<<"Enter the value of a is: ";
    cin>>a;
    cout<<"Enter the value of b is: ";
    cin>>b; 
    cout<<"Enter the operation is taken to use is: ";
    cin>>Operation;
}
void Mathematical_Operation::calc()
{
    switch (Operation)
    {
    case '+':
        cout<<"The addition operation of a and b is: "<<(a + b)<<endl;
        break;
    case '-':
        cout<<"The subtraction operation of a and b is: "<<(a - b)<<endl;
        break;
    case '*':
        cout<<"The multiplication operation of a and b is: "<<(a * b)<<endl;
        break;
    case '/':
        cout<<"The division operation of a and b is: "<<(a / b)<<endl;
        break;
    case '%':
        cout<<"The modulus operation of a and b is: "<<(a % b)<<endl;
    default:
        cout<<"The above operation is given is right otherwise other operations is wrong. ";
        break;
    }
}

int main()
{
    Mathematical_Operation m;
    m.input();
    m.calc();
    return 0;
}