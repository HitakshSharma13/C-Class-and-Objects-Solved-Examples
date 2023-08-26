// C++ program to Print Number from 1 to n using Class.

#include<iostream>
using namespace std;

class Number
{
    // private:
        int n;
        public:
        void input();
        void calc();
        // void display();
};
void Number ::input()
{
    cout<<"Enter the value of n is: ";
    cin>>n;
} 
void Number :: calc()
{
    for (int i = 1; i <= n; i++)
    {
        // cout<<"The number between "<<i<<endl;
        cout<<i<<" ";
    }
    
}
int main()
{
    Number n1;
    n1.input();
    n1.calc();   
    return 0;
}