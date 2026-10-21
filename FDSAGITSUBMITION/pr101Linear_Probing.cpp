#include <iostream>
using namespace std;

int main()
{
    int table[10];
    int n, key, index;

    for (int i = 0; i < 10; i++)
        table[i] = -1;

    cout << "Enter number of vehicles (max 10): ";
    cin >> n;

    if (n < 1 || n > 10)
    {
        cout << "Invalid number of vehicles!";
        return 0;
    }

    cout << "Enter vehicle registration numbers:\n";

    for (int i = 0; i < n; i++)
    {
        cin >> key;
        index = key % 10;

        while (table[index] != -1)
        {
            index = (index + 1) % 10;
        }

        table[index] = key;
    }

    cout << "\nParking Slots:\n";

    for (int i = 0; i < 10; i++)
    {
        cout << i << " : ";

        if (table[i] == -1)
            cout << "Empty";
        else
            cout << table[i];

        cout << endl;
    }

    return 0;
}
