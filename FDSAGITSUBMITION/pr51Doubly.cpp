#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* prev;
    Node* next;
};

Node* head = NULL;

void insertFront(int value)
{
    Node* newNode = new Node();

    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = head;

    if (head != NULL)
        head->prev = newNode;

    head = newNode;
}

void insertEnd(int value)
{
    Node* newNode = new Node();

    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL)
    {
        newNode->prev = NULL;
        head = newNode;
        return;
    }

    Node* temp = head;

    while (temp->next != NULL)
        temp = temp->next;

    newNode->prev = temp;
    temp->next = newNode;
}

void insertAfter(int song, int value)
{
    Node* temp = head;

    while (temp != NULL && temp->data != song)
        temp = temp->next;

    if (temp == NULL)
    {
        cout << "Song not found" << endl;
        return;
    }

    Node* newNode = new Node();

    newNode->data = value;
    newNode->next = temp->next;
    newNode->prev = temp;

    if (temp->next != NULL)
        temp->next->prev = newNode;

    temp->next = newNode;
}

void deleteFront()
{
    if (head == NULL)
    {
        cout << "Playlist is empty" << endl;
        return;
    }

    Node* temp = head;
    head = head->next;

    if (head != NULL)
        head->prev = NULL;

    delete temp;
}

void display()
{
    Node* temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

void countSongs()
{
    int count = 0;
    Node* temp = head;

    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    cout << "Total songs: " << count << endl;
}

int main()
{
    insertFront(20);
    cout << "After insert front: ";
    display();

    insertEnd(40);
    cout << "After insert end: ";
    display();

    insertAfter(20, 30);
    cout << "After insert after 20: ";
    display();

    countSongs();

    deleteFront();
    cout << "After deleting first song: ";
    display();

    return 0;
}