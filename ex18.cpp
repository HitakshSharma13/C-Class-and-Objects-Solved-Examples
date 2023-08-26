// C++ program to enter Student Details using Virtual Class.

#include<iostream>
using namespace std;

class Student
{
    protected:
        string name; 
    public:
        void set_name(string a)
        {
            name = a;
        }
        void print_name(void)
        {
            cout<<"Your name is: "<<name<<endl;
        }
};
class Roll_No : virtual public Student
{
    protected:
    int roll_no;
    public:
    void set_roll_no(int b)
    {
        roll_no = b;
    }
    void print_roll_no(void)
    {
        cout<<"Your roll is: "<<roll_no<<endl;
    }
};
class Marks : virtual public Student
{
    protected:
    float maths, physics, chemistry, hindi, english;
    public:
    void set_marks(float m1, float m2, float m3, float m4, float m5)
    {
        maths = m1;
        physics = m2;
        chemistry = m3;
        hindi =  m4;
        english = m4;
    }
    void print_marks(void)
    {
        cout<<"Your result of maths marks is: "<<maths<<endl;
        cout<<"Your result of physics marks is: "<<physics<<endl;
        cout<<"Your result of chemistry marks is: "<<chemistry<<endl;
        cout<<"Your result of hindi marks is: "<<hindi<<endl;
        cout<<"Your result of english marks is: "<<english<<endl;
    }
};
class StudentDetails : public Roll_No, public Marks
{
    private:
    float details, details_marks;
    public:
    void display(void)
    {
        details = roll_no;
        details_marks = maths + physics + chemistry + hindi + english;
        print_name();
        print_roll_no();
        print_marks();
        cout<<"The Student details of "<<name<<" roll number is: "<<details<<endl;
        cout<<"The Student details of "<<name<<" total marks is: "<<details_marks<<endl;
    }
};

int main()
{
    StudentDetails s1;
    s1.set_roll_no(500);
    s1.set_name("Ram");
    s1.set_marks(100,98,94,97,95);
    s1.display();
    return 0;
}