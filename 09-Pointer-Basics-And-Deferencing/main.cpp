#include <iostream>
using namespace std;

int main() {
    int num = 25;
    int *ptr = &num; // Pointer ptr stores the address of num

    cout << "--- Pointer Basics and Dereferencing ---" << endl;
    cout << "Value of num: " << num << endl;
    cout << "Memory Address of num (&num): " << &num << endl;
    cout << "Value stored in pointer ptr: " << ptr << " (Matches address of num!)" << endl;
    cout << "Value pointed to by ptr (*ptr): " << *ptr << " (Dereferencing)" << endl;

    // Modifying value via pointer
    *ptr = 50; 
    cout << "\nValue of num after modifying via pointer (*ptr = 50): " << num << endl;

    return 0;
}
