#include <iostream>
using namespace std;

int main() {
    int n ;

    cout << "Enter number of bakery items: ";
    cin >> n;

    int arr[n];

        cout << "Enter bakery item IDs: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int h;

    cout << "Enter number of rotation: ";
    cin >> h;
    
    h = h % n; 

    cout << "Final display order: ";
    
    for(int i = h; i < n; i++) {
        cout << arr[i] << " ";
    }
    for(int i = 0; i < h; i++) {
        cout << arr[i] << " ";
    }
}