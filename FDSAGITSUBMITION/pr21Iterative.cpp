#include <iostream>
using namespace std;

int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int key, i, found = -1;

    cout << "Enter number: ";
    cin >> key;

    for (i = 0; i < 5; i++)
    {
        if (a[i] == key)
        {
            found = i;
            break;
        }
    }

    if (found != -1)
        cout << "Element found at position " << found + 1;
    else
        cout << "Element not found";

    return 0;
}