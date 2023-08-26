// C++ program to show Counter using Constructor.

#include<iostream>
using namespace std;

class Counter
{
    private:
        int count ;
    public:
        Counter(void);

       void input_count()
        {
            cout<<"This is the time when before constructor is called for object number ,Count is ="<<count<<endl;
            count++;
        }
        int output_count()
        {
            cout<<"This is the time when after constructor is called for object number ,Count is ="<<count<<endl;
            return count;
        }
};
Counter::Counter()
{
    count = 0;
}
int main()
{
    Counter c1;

    c1.input_count();
    c1.output_count();
    return 0;
}