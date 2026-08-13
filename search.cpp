#include <iostream>
using namespace std;

int main() {
    int n, key;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[100];

    cout << "Enter elements in sorted order: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter number to search: ";
    cin >> key;

    // Linear Search
    int linear = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            linear = i;
            break;
        }
    }

    if (linear != -1)
        cout << "Linear Search: Found at position " << linear + 1 << endl;
    else
        cout << "Linear Search: Not Found" << endl;


    // Binary Search
    int low = 0, high = n - 1;
    int binary = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == key) {
            binary = mid;
            break;
        }
        else if (arr[mid] < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    if (binary != -1)
        cout << "Binary Search: Found at position " << binary + 1 << endl;
    else
        cout << "Binary Search: Not Found" << endl;

    return 0;
}