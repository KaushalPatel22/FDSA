#include <iostream>
using namespace std;

int search(int a[], int low, int high, int key)
{
    if (low > high)
        return -1;

    int mid = (low + high) / 2;

    if (a[mid] == key)
        return mid;

    if (key < a[mid])
        return search(a, low, mid - 1, key);

    return search(a, mid + 1, high, key);
}

int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int key;

    cout << "Enter number: ";
    cin >> key;

    int result = search(a, 0, 4, key);

    if (result != -1)
        cout << "Element found at position " << result + 1;
    else
        cout << "Element not found";

    return 0;
}