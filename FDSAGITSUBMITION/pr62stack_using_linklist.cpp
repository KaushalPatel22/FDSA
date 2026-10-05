#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

Node* top = NULL;

void push(int value)
{
    Node* newNode = new Node();

    newNode->data = value;
    newNode->next = top;
    top = newNode;

    cout << "Visited: " << value << endl;
    cout << "Current Page: " << top->data << endl;
}

void pop()
{
    if (top == NULL)
    {
        cout << "No history left" << endl;
    }
    else
    {
        cout << "Back from: " << top->data << endl;

        Node* temp = top;
        top = top->next;

        delete temp;

        if (top == NULL)
            cout << "No page left" << endl;
        else
            cout << "Current Page: " << top->data << endl;
    }
}

int main()
{
    push(1);
    push(2);
    push(3);

    pop();
    pop();
    pop();
    pop();

    return 0;
}