#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

Node* head = NULL;

void insertEnd(int value)
{
    Node* newNode = new Node();
    newNode->data = value;

    if (head == NULL)
    {
        head = newNode;
        newNode->next = head;
        return;
    }

    Node* temp = head;

    while (temp->next != head)
        temp = temp->next;

    temp->next = newNode;
    newNode->next = head;
}

void insertPosition(int value, int pos)
{
    Node* newNode = new Node();
    newNode->data = value;

    if (head == NULL || pos == 1)
    {
        if (head == NULL)
        {
            head = newNode;
            newNode->next = head;
        }
        else
        {
            Node* temp = head;

            while (temp->next != head)
                temp = temp->next;

            newNode->next = head;
            temp->next = newNode;
            head = newNode;
        }

        return;
    }

    Node* temp = head;

    for (int i = 1; i < pos - 1 && temp->next != head; i++)
        temp = temp->next;

    newNode->next = temp->next;
    temp->next = newNode;
}

void deleteValue(int value)
{
    if (head == NULL)
        return;

    Node* temp = head;
    Node* prev = NULL;

    if (head->data == value)
    {
        Node* last = head;

        while (last->next != head)
            last = last->next;

        if (head->next == head)
        {
            delete head;
            head = NULL;
            return;
        }

        last->next = head->next;
        head = head->next;

        delete temp;
        return;
    }

    do
    {
        prev = temp;
        temp = temp->next;
    }
    while (temp != head && temp->data != value);

    if (temp != head)
    {
        prev->next = temp->next;
        delete temp;
    }
}

void display()
{
    if (head == NULL)
    {
        cout << "Circle is empty" << endl;
        return;
    }

    Node* temp = head;

    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    while (temp != head);

    cout << endl;
}

int main()
{
    insertEnd(10);
    insertEnd(20);
    insertEnd(30);

    cout << "Initial circle: ";
    display();

    insertPosition(15, 2);
    cout << "After insertion: ";
    display();

    deleteValue(20);
    cout << "After deletion: ";
    display();

    return 0;
}