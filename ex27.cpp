// C++ program to enter student details by passing parameters to constructors.

#include<iostream>
#include<cstring>
using namespace std;

class StudentDetails
{
    private:
        int roll_no;
        float marks;
        string name;
        // string class_study;
        // string grade, section, name;
        public:
            StudentDetails(int r, float m, string d)
            // void Student(int r, string a, float m, string b, string c, string d)

            {
                roll_no = r;
                marks = m;
            //     class_study = a;
            //     grade = b;
            //     section = c;
                name = d;
            } 
            void print()
            {
                cout<<"The constructor is called. "<<endl;
                // cout<<"The Student study in class is: "<<class_study<<endl;
                // cout<<"The section of the class is: "<<section<<endl;
                cout<<"The student roll number is: "<<roll_no<<endl;
                cout<<"The name of the student is: "<<name<<endl;
                cout<<"The marks of the student in all subjects is: "<<marks<<endl;
                // cout<<"The garde obtained by the student in all subjects is: "<<grade<<endl;
            }
};

int main()
{
    // StudentDetails s("VI", "A", 156, "Mohan", 548, "A");
    StudentDetails s(145, 489.50, "Mohan");
    s.print();   
    return 0;
}