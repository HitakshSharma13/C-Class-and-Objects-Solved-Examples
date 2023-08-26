// C++ program to display entered date.

#include<iostream>
using namespace std;

class Date
{
    private:
    int mm, dd, yyyy;
    public:
        void input();
        void display();
};
void Date:: input()
{
    cout<<"Enter the date is: ";
    cin>>dd;
    cout<<"Enter the month is: ";
    cin>>mm;
    cout<<"Enter the year is: ";
    cin>>yyyy; 
}
void Date:: display()
{
    cout<<"Displaying the date is:"<<dd<<"-"<<mm<<"-"<<yyyy<<endl;
}
int main()
{
    Date d1;
    d1.input();
    d1.display();
    return 0;
}