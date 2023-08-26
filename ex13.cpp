// C++ program to display Entered time using Class.

#include<iostream>
using namespace std;

class time
{
    private:
    int hr, min, sec;
    public:
    void input(int p, int q, int r)
    {
        hr = p;
        min = q;
        sec= r;
    }
    void display()
    {
        cout<<"Time of this moment is: "<<hr<<":"<<min<<":"<<sec<<endl;
    }
};

int main()
{
    int p,q,r;
    time t;
    cout<<"Enter the hour is: ";
    cin>>p;
    cout<<"Enter the minute is: ";
    cin>>q;
    cout<<"Enter the second is: ";
    cin>>r;
    t.input(p,q,r);
    t.display();

    return 0;
}