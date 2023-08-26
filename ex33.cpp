// C++ program to implement Simple Queue using Class.

#include<iostream>
using namespace std;

class Queue
{
    private:
        int* array;
        int rear;
        int front;
        int count;
    public:
        Queue()
        {
            array = new int[10];
            rear = 0;
            front = 0;
            count = 0;
        } 
        bool isFull()
        {
            if(count >10)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        bool isEmpty()
        {
            if(count ==0)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        void insert(int x)
        {
            if(isFull() == true)
            {
                cout<<"Queue is full "<<endl; 
            }
            else
            {
                array[rear] = x;
                rear += 1;
                count++;
            }
        }
        int remove()
        {
            if(isEmpty() == true)
            {
                cout<<"Queue is empty "<<endl;
            }
            else
            {
                int temp = array[front];
                front += 1;
                count--;
                return temp;
            }
        }
};

int main()
{
    Queue q1;
    q1.insert(1);
    q1.insert(2);
    q1.insert(3);
    q1.insert(4);
    q1.insert(5);
    q1.insert(6);
    q1.insert(7);
    q1.insert(8);
    q1.insert(9);
    q1.insert(10);

    while (!q1.isEmpty())
    {
        cout<<q1.remove()<<endl;
    }
    
    return 0;
}