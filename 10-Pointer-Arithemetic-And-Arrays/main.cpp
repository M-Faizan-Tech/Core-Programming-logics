#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr; // arr automatically points to the 1st element (&arr[0])

    cout << "--- Traversing Array Using Pointer Arithmetic ---" << endl;
    for(int i = 0; i < 5; i++) {
        cout << "Element " << i << " Address: " << (ptr + i) << " | Value: " << *(ptr + i) << endl;
    }

    return 0;
}
