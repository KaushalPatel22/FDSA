#include <iostream>
using namespace std;

int search(int a[], int n, int key, int i)
{
    if (i == n)
        return -1;

    if (a[i] == key)
        return i;

    return search(a, n, key, i + 1);
}

int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int key;

    cout << "Enter number: ";
    cin >> key;

    int result = search(a, 5, key, 0);

    if (result != -1)
        cout << "Element found at position " << result + 1;
    else
        cout << "Element not found";

    return 0;
}