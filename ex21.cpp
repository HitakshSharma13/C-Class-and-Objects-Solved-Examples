// C++ program to perform Complex Operations using Overloading.

#include<iostream>
using namespace std;

class Complex
{
    private:
        int real, imaginary;
    public:
        void get_Data()
        {
            cout<<"Enter the value of real part is: ";
            cin>>real;
            cout<<"Enter the value of imaginary part is: ";
            cin>>imaginary;
        }
        void put_Data()
        {
            cout<<"The complex number is: "<<real<<"+"<<imaginary<<"i"<<endl;
        }
        Complex operator+(Complex c2)
        {
            Complex c3;
            c3.real = real + c2.real;
            c3.imaginary = imaginary + c2.imaginary;
            return c3;
        }
};

int main()
{
    Complex c1, c2,c3;
    c1.get_Data();
    c2.get_Data();
    c3 = c1 + c2;
    c1.put_Data();
    c2.put_Data();
    // c3.get_Data(c1,c2);
    c3.put_Data();
    return 0;
}