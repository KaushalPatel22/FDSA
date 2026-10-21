#include <iostream>
using namespace std;

int q[5];
int front = 0;
int rear = -1;

void enqueue(int x)
{
    if (rear == 4)
    {
        cout << "Queue is full" << endl;
        return;
    }

    rear++;
    q[rear] = x;
}

void dequeue()
{
    if (front > rear)
    {
        cout << "Queue is empty" << endl;
        return;
    }

    cout << "Served: " << q[front] << endl;
    front++;
}

void display()
{
    if (front > rear)
    {
        cout << "Queue is empty" << endl;
        return;
    }

    cout << "Front: " << q[front] << endl;
}

int main()
{
    enqueue(10);
    display();

    enqueue(20);
    display();

    dequeue();
    display();

    enqueue(30);
    display();

    return 0;
}                           