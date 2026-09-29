#include <iostream>
using namespace std;

int main() {
    int arr[100], n, pos, value;

    cout << "Enter size of array: ";
    cin >> n;

    cout << "Enter array Elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Insert
    cout << "Enter position to insert: ";
    cin >> pos;

    cout << "Enter value to insert: ";
    cin >> value;

    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos - 1] = value;
    n++;

    cout << "After insertion: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    // Delete
    cout << "\nEnter position to delete: ";
    cin >> pos;

    for (int i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--;

    cout << "After deletion: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
