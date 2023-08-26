// C++ program to add two Time Objects using Call By Reference.

#include<iostream>
using namespace std;

class Time
{
    private:
    int hr, min, sec;
    public:
    void setTime();
    void sumTime(Time &, Time & );
    void display();
};
void Time::setTime()
{
    cout<<"Enter time in hr is: ";
    cin>>hr;
    cout<<"Enter time in min is: ";
    cin>>min;
    cout<<"Enter time in sec is: ";
    cin>>sec;
}
void Time:: sumTime(Time &t1, Time &t2)
{
    sec = t1.sec + t2.sec;
    min = sec/60;
    sec = sec%60;
    min = t1.min + t2.min;
    hr = min/60;
    min = min%60;
    hr = hr +t1.hr + hr +t2.hr;
    hr = ((hr)-(24));
}
void Time:: display()
{
    cout<<"The sum time is: "<<hr<<":"<<min<<":"<<sec<<endl;
}

int main()
{
    Time t1, t2, t3;
    cout<<"Enter the fist time is: ";
    t1.setTime();
    cout<<"Enter the second time is: ";
    t2.setTime();
    cout<<"Display first time is: ";
    t1.display();
    cout<<"Display second time is: ";
    t2.display();
    t3.sumTime(t1,t2);
    t3.display();
    return 0;
}