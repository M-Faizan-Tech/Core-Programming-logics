#include <iostream>
using namespace std;

int main() {
    int arr[100], freq[100];
    int size, i, j, count;

    cout << "Enter size of array: ";
    cin >> size;

    cout << "Enter elements in array: ";
    for(i = 0; i < size; i++) {
        cin >> arr[i];
        freq[i] = -1; // Initializing frequency array with -1
    }

    // Logic: Counting frequency of each element
    for(i = 0; i < size; i++) {
        count = 1;
        for(j = i + 1; j < size; j++) {
            if(arr[i] == arr[j]) {
                count++;
                freq[j] = 0; // To avoid counting same element again
            }
        }
        if(freq[i] != 0) {
            freq[i] = count;
        }
    }

    cout << "\n--- Element Frequency Results ---\n";
    for(i = 0; i < size; i++) {
        if(freq[i] != 0) {
            cout << arr[i] << " occurs " << freq[i] << " times" << endl;
        }
    }
    return 0;
}
