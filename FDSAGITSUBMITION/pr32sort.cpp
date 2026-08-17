#include <iostream>
using namespace std;

int main()
{
    int a[6] = {2, 0, 1, 2, 1, 0};

    int low = 0;
    int mid = 0;
    int high = 5;

    while (mid <= high)
    {
        if (a[mid] == 0)
        {
            int temp = a[low];
            a[low] = a[mid];
            a[mid] = temp;

            low++;
            mid++;
        }
        else if (a[mid] == 1)
        {
            mid++;
        }
        else
        {
            int temp = a[mid];
            a[mid] = a[high];
            a[high] = temp;

            high--;
        }
    }

    cout << "Sorted array: ";

    for (int i = 0; i < 6; i++)
        cout << a[i] << " ";

    return 0;
}