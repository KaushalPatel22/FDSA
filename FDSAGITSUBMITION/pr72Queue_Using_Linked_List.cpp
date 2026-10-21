#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

Node* front = NULL;
Node* rear = NULL;

void enqueue(int x)
{
    Node* newNode = new Node();

    newNode->data = x;
    newNode->next = NULL;

    if (rear == NULL)
    {
        front = rear = newNode;
        return;
    }

    rear->next = newNode;
    rear = newNode;
}

void dequeue()
{
    if (front == NULL)
    {
        cout << "Queue is empty" << endl;
        return;
    }

    Node* temp = front;

    cout << "Served: " << front->data << endl;

    front = front->next;

    if (front == NULL)
        rear = NULL;

    delete temp;
}

void display()
{
    if (front == NULL)
    {
        cout << "Queue is empty" << endl;
        return;
    }

    cout << "Front: " << front->data << endl;
}

int main()
{
    enqueue(10);
    display();

    enqueue(20);
    display();

    enqueue(30);
    display();

    dequeue();
    display();

    dequeue();
    display();

    return 0;
}