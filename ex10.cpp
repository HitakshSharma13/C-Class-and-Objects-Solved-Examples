// C++ program to display Student details using Class.

#include<iostream>
#include<string>
using namespace std;

class Student
{
    private:
        int id, roll_no;
        string name;
    public:
        void input();
        void display();    
};
void Student::input()
{
    cout<<"Student id number is: ";
    cin>>id;
    cout<<"Student roll number is: ";
    cin>>roll_no;
    cout<<"Student name is: ";
    cin>>name;
}
void Student::display()
{
    cout<<"The details of the student id is: "<<id<<endl;
    cout<<"The details of the student roll number is: "<<roll_no<<endl;
    cout<<"The details of the student name is: "<<name<<endl;
}

int main()
{
    Student s;
    s.input();
    s.display();   
    return 0;
}