#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of array to allocate on Heap: ";
    cin >> size;

    // Allocating dynamic array on Heap memory
    int *dynamicArr = new int[size];

    cout << "Enter " << size << " elements: " << endl;
    for(int i = 0; i < size; i++) {
        cin >> dynamicArr[i];
    }

    cout << "\n--- Elements in Dynamic Heap Array ---" << endl;
    int sum = 0;
    for(int i = 0; i < size; i++) {
        cout << "Address: " << &dynamicArr[i] << " | Value: " << dynamicArr[i] << endl;
        sum += dynamicArr[i];
    }
    cout << "Sum of elements: " << sum << endl;

    // Deallocating and clearing memory from Heap to prevent memory leaks
    delete[] dynamicArr;
    dynamicArr = NULL; 

    cout << "\nMemory successfully released from Heap." << endl;
    return 0;
}
