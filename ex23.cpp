// C++ program to show Constructor and Destructor.

#include<iostream>
using namespace std;

class Add
{
    private:
        int a, b;
    public:
        Add(void);
        void print(void)
        {
            cout<<"The constructor is called."<<endl;
            cout<<"The addition of two number "<<a<<" and "<<b<<" is:"<<(a+b)<<endl;
        }
        ~Add()
        {
            cout<<"The destructor is called."<<endl;
            cout<<"The value of the destructor of a is: "<<a<<endl;
            a--;
            cout<<"The value of the destructor of b is: "<<b<<endl;
            b--;
        }
};
Add ::Add()
{
    a = 56;
    b = 89;
}

int main()
{
    Add a;
    a.print();
    return 0;
}