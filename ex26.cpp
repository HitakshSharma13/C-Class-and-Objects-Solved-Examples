// C++ program to display Student Details using Constructor and Destructor.

#include<iostream>
#include<cstring>
using namespace std;

class StudentDetails 
{
    private:
        int roll_no;
        float marks;
        string name;
    public:
        StudentDetails(void);
        void print()
        {
            cout<<"The Constructor is called."<<endl;
            cout<<"The Student Details are :"<<endl;
            cout<<"The name of the Student is: "<<name<<endl;
            cout<<"The roll number of the Student is: "<<roll_no<<endl; 
            cout<<"The marks of the Student is: "<<marks<<endl;
        }
        ~StudentDetails()
        {
            cout<<"The Destructor is called."<<endl;
            cout<<"The Student Details are closed ......."<<endl;
        }
};
StudentDetails ::StudentDetails()
{
    name = "Raju";
    roll_no = 101;
    marks = 498;
}
int main()
{
    StudentDetails s1;
    s1.print();
    // cout<<endl;
    // s2.print();
    return 0;
}