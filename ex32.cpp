// C++ program to Multiply every member by k using Class.

#include<iostream>
#include<cmath>
using namespace std;

class Multiply 
{
    private:
        int n,i;
    public:
        void input();
        void calculate();
};
void Multiply::input()
{
    cout<<"Enter the value of n is: ";
    cin>>n;
}
void Multiply::calculate()
{
    for (int k = 0; k <100; k++)
    {
        i = n*k;
        cout<<"Multiply value of members is: "<<i<<endl;
    }
    
}

int main()
{
    Multiply m;
    m.input();
    m.calculate();
    return 0;
}