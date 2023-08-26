// C++ program to find sum of odd numbers between 1 and 100 using Class

#include<iostream>
using namespace std;

class Sum
{
    private:
    int n, sum =0;
    public:
        void calc();
        void display();
};
void Sum::calc()
{
    for( n = 1; n<=100; n+=2)
    {
        sum = sum +n;
    }
}
void Sum::display()
{
    cout<<"The sum of odd numbers between 1 and 100 is: "<<sum<<endl;
}

int main()
{
    Sum s1;
    s1.calc();
    s1.display();
    return 0;
}