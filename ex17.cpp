// C++program to Compare Two Strings using Overloading 

#include<iostream>
#include<cstring>
using namespace std;

class CompareString
{
private:
    char a[100];
public:
    void input();
    
    int operator == (CompareString X)
    {
        if(strcmp(a, X.a) == 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
        
    }
};
void CompareString ::input()
{
    cout<<"Enter the string is: ";
    cin>>a;
}


int main()
{
    CompareString s1, s2;
    s1.input();
    s2.input();
    if(s1 == s2)
    {
        cout<<"The string is equal to each other. "<<endl;
    }
    else
    {
        cout<<"The string is not equal to each other. "<<endl;
    }
    return 0;
}