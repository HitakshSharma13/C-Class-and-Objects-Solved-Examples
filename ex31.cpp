// C++ program to Calculate Electricity Bill of Person using Class.

#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

class ElectricityBill 
{
    private:
    int customer_no;
    string customer_name;
    int units;
    double bill;
    public:
    void input();
    void calculate();
    void display();
};
void ElectricityBill:: input()
{
    cout<<"The Customer  details is: "<<endl;
    cout<<"The customer number is: ";
    cin>>customer_no;
    cout<<"The customer name is: ";
    cin>>customer_name;
    cout<<"The customer consume units is: ";
    cin>>units;
} 
void ElectricityBill:: calculate()
{
    if(units<=100)
    {
        bill = (units*1.20);
        cout<<"The customer bill is: "<<bill<<endl;
    }
    else if(units<=300)
    {
        bill = (100*1.20)+(units -100)*2;
        cout<<"The customer bill is: "<<bill<<endl;
    }
    else
    {
        bill = (100*1.20)+(200*2)+(units -300)*3;
        cout<<"The customer bill is: "<<bill<<endl;
    }
}
void ElectricityBill:: display()
{
    cout<<"The customer number is: "<<customer_no<<endl;
    cout<<"The customer name is: "<<customer_name<<endl;
    cout<<"The customer consumes number of units is: "<<units<<endl;
    // cout<<"The customer bill is: "<<bill<<endl;
}
int main()
{
    ElectricityBill e1;
    e1.input();
    e1.calculate();
    e1.display();
    return 0;
}