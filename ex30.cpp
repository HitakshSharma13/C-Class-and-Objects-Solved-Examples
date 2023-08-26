// C++ program to calculate Simple Interest using class.

#include<iostream>
#include<cmath>
using namespace std;

class SimpleInterest
{
    private:
    int p, t;
    float r;
    public:
    int si;
    void input();
    void calculate();
    void display();
};
void SimpleInterest:: input()
{
    cout<<"Enter the value of principal  amount is: ";
    cin>>p;
    cout<<"Enter the value rate of the interest is: ";
    cin>>r;
    cout<<"Enter the value of time duration is: ";
    cin>>t;
}
void SimpleInterest:: calculate()
{
    int si;
    si = ((p*r*t)/100);
}
void SimpleInterest:: display()
{
    cout<<"The Simple Interest is calculated is: "<<si<<endl;
}
int main()
{
    SimpleInterest s;
    s.input();
    s.calculate();
    s.display();   
    return 0;
}