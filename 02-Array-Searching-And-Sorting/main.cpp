#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int arr[5];

    cout << "Enter 5 elements for the array: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Logic 1: Finding Max and Min
    int maxVal = arr[0];
    int minVal = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxVal) maxVal = arr[i];
        if (arr[i] < minVal) minVal = arr[i];
    }

    // Logic 2: Sorting Array (Bubble Sort Technique)
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "\nMinimum Value: " << minVal << endl;
    cout << "Maximum Value: " << maxVal << endl;
    cout << "Sorted Array (Ascending): ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
