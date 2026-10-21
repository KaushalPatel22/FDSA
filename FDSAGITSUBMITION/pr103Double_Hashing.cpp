#include <iostream>
using namespace std;

int main()
{
    int table[10];
    int n, key, h1, h2, index;

    for (int i = 0; i < 10; i++)
        table[i] = -1;

    cout << "Enter number of student IDs (max 10): ";
    cin >> n;

    if (n < 1 || n > 10)
    {
        cout << "Invalid number of IDs!";
        return 0;
    }

    cout << "Enter student IDs:\n";

    for (int i = 0; i < n; i++)
    {
        cin >> key;

        h1 = key % 10;
        h2 = 7 - (key % 7);

        int j;

        for (j = 0; j < 10; j++)
        {
            index = (h1 + j * h2) % 10;

            if (table[index] == -1)
            {
                table[index] = key;
                break;
            }
        }

        if (j == 10)
            cout << key << " could not be inserted.\n";
    }

    cout << "\nHash Table:\n";

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
