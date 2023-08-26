// C++ program to display Date using Constructor.

#include<iostream>
using namespace std;

class Date
{
    private:
        int date, year, month;
    public:
        Date(void);
        void print()
        {
            cout<<"Today date is:"<<endl;
            cout<<date<<"-"<<month<<"-"<<year<<endl;
        }
};
Date ::Date()
{
    date = 12;
    month = 06;
    year = 2023;
}

int main()
{
    Date d;
    d.print();
    return 0;
}