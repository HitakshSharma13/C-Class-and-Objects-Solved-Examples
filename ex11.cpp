// C++ program to find Largest among 3 numbers using Class

#include<iostream>
using namespace std;

class largest_number
{
    private:
    int x, y, z;
    public:
    void input();
    void calc();
};
void largest_number::input()
{
    cout<<"Enter the value of x is: ";
    cin>>x;
    cout<<"Enter the value of  y is: ";
    cin>>y;
    cout<<"Enter the value of z is: ";
    cin>>z;
}
void largest_number::calc()
{
    int a;
    a = ((x>y)&&(x>z)?x:(y>x)&&(y>z)?y:z);
    cout<<"The greatest among three numbers is: "<<a<<endl;
}
int main()
{
    largest_number l1;
    l1.input();
    l1.calc();
    return 0;
}