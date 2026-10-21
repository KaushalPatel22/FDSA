#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> table[10];
    int n, key, index;

    cout << "Enter number of books: ";
    cin >> n;

    if (n < 1 || n > 100)
    {
        cout << "Enter between 1 and 100 books!";
        return 0;
    }

    cout << "Enter book codes:\n";

    for (int i = 0; i < n; i++)
    {
        cin >> key;
        index = key % 10;

        table[index].push_back(key);
    }

    cout << "\nLibrary Shelves:\n";

    for (int i = 0; i < 10; i++)
    {
        cout << i << " : ";

        if (table[i].empty())
            cout << "Empty";

        for (int j = 0; j < table[i].size(); j++)
        {
            cout << table[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}