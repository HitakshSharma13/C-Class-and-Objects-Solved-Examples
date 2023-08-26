// C++ program to add two time objects using Call By Address.

#include<iostream>
using namespace std;

class time
{
    private:
    int hr, min, sec;
    public:
    void inputData();
    void add(time *, time *);
    void display();
};
void time :: inputData()
{
    cout<<"Enter time in hr is: ";
    cin>>hr;
    cout<<"Enter time in min is: ";
    cin>>min;
    cout<<"Enter time in sec is: ";
    cin>>sec;
}
void time :: add(time *t1, time *t2)
{
    sec = t1->sec + t2->sec;
    min = sec/60;
    sec = sec%60;
    min = min+ t1->min + t2->min;
    hr = min/60;
    min = min%60;
    hr = hr + t1->hr + t2->hr;
    hr = (hr -24);
}
void time :: display()
{
    cout<<"Enter the time is: "<<hr<<":"<<min<<":"<<sec<<endl; 
}

int main()
{
    time t1, t2, t3;
    cout<<"Enter the first time is: ";
    t1.inputData();
    cout<<"Enter the second time is: ";
    t2.inputData();
    cout<<"Display the first time is: ";
    t1.display();
    cout<<"Enter the second time is: ";
    t2.display();
    t3.add(&t1, &t2);
    t3.display();
    return 0;
}