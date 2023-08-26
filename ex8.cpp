// C++ program to Add two Complex number passing objects to function.

#include<iostream>
using namespace std;

class Complex
{
private:
    int real, imaginary;
public:
    void input();
    void calc(Complex, Complex);
    void display()
    {
    cout<<"The sum of the complex number is: "<<real<<"+"<<imaginary<<"i"<<endl;
    }
};
void Complex:: input()
{
    cout<<"Enter the real part of the complex number is: ";
    cin>>real;
    cout<<"Enter the imaginary part of the complex number is: ";
    cin>>imaginary;
}    
void Complex :: calc(Complex c1, Complex c2)
{
    real = c1.real + c2.real;
    imaginary = c1.imaginary + c2.imaginary;    
}
// void Complex ::display();

int main()
{
    Complex c1, c2, c3;
    cout<<"Enter the first complex number is:"<<endl;
    c1.input();
    cout<<"Enter the second complex number is:"<<endl;
    c2.input();
    cout<<"Display the first complex number is:"<<endl;
    c1.display();
    cout<<"Display the second complex number is:"<<endl;
    c2.display();
    c3.calc(c1,c2);
    cout<<"Display the sum of the two complex numbers is:"<<endl;
    c3.display();   
    return 0;
}