#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    float mean, median;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[100];

    cout << "Enter elements in sorted order: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum = sum + arr[i];
    }

    // Mean
    mean = (float)sum / n;

    // Median
    if (n % 2 == 0) {
        median = (arr[n / 2 - 1] + arr[n / 2]) / 2.0;
    }
    else {
        median = arr[n / 2];
    }

    cout << "Mean = " << mean << endl;
    cout << "Median = " << median << endl;

    return 0;
}