#include <iostream>
using namespace std;

#define SIZE 5

int stackArr[SIZE];
int top = -1;

void push(int value)
{
    if (top == SIZE - 1)
    {
        cout << "Stack Overflow" << endl;
    }
    else
    {
        top++;
        stackArr[top] = value;
        cout << "Placed: " << value << endl;
        cout << "Top: " << stackArr[top] << endl;
    }
}

void pop()
{
    if (top == -1)
    {
        cout << "Stack Underflow" << endl;
    }
    else
    {
        cout << "Taken: " << stackArr[top] << endl;
        top--;

        if (top == -1)
            cout << "Stack is Empty" << endl;
        else
            cout << "Top: " << stackArr[top] << endl;
    }
}

int main()
{
    push(10);
    push(20);
    push(30);

    pop();
    pop();

    push(40);
    push(50);

    return 0;
}