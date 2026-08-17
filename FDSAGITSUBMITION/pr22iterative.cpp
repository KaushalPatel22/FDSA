#include <iostream>
using namespace std;

int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int key;
    int low = 0, high = 4;
    int found = -1;

    cout << "Enter number: ";
    cin >> key;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (a[mid] == key)
        {
            found = mid;
            break;
        }
        else if (key < a[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    if (found != -1)
        cout << "Element found at position " << found + 1;
    else
        cout << "Element not found";

    return 0;
}