// C++ program to Count number of times a function is called.

#include<iostream>
using namespace std;

class CountNumber
{
    private:
    // int n , r, b;
    // float n1,r1, b1;
    int n, b;
    float n1, b1;
    // static int count;
    static int r;
    public:
    void input();
    // void sum();
    // void square();
    void calc();
    void display();
};
void CountNumber ::input()
{
    cout<<"Enter the value of n is: ";
    cin>>n;
    cout<<"Enter the value of n1 is: ";
    cin>>n1;
    // cout<<"Enter the value of r is: ";
    // cin>>r;
    // cout<<"Enter the value of r1 is: ";
    // cin>>r1;
}
// int CountNumber ::  count=0;
int CountNumber ::  r=0;

// void CountNumber:: sum()
// {
//     // b = n+r;
//     // b1 = n1 * r1;
//     b = n+n;
//     b1= n1+n1;
//     count++;
// }
// void CountNumber ::square()
void CountNumber :: calc()
{
    b = n*n;
    b1 = n1*n1;
    // count++;
    r++;
}
void CountNumber:: display()
{
    cout<<"The value of b is: "<<b<<endl;
    cout<<"The value of b1 is: "<<b1<<endl;
    // cout<<"The function is called "<<count<<" times by the objects";
    cout<<"The function is called "<<r<<" times by the objects";
}
int main()
{
    CountNumber c1;
    c1.input();
    // c1.sum();
    // c1.square();
    c1.calc();
    c1.display();
    return 0;
}