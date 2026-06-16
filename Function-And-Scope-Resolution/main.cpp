#include <iostream>
using namespace std;

// Global variable
int globalVar = 100;

// Function declarations
void callByValue(int num);
void callByReference(int &num);

int main() {
    int localVar = 50;

    cout << "Initial local variable value: " << localVar << endl;
    cout << "Global variable value inside main: " << globalVar << endl << endl;

    // 1. Testing Call by Value
    cout << "--- Testing Call by Value ---" << endl;
    callByValue(localVar);
    cout << "Value in main after callByValue: " << localVar << " (No change!)" << endl << endl;

    // 2. Testing Call by Reference
    cout << "--- Testing Call by Reference ---" << endl;
    callByReference(localVar);
    cout << "Value in main after callByReference: " << localVar << " (Value changed!)" << endl;

    return 0;
}

// Function definitions
void callByValue(int num) {
    num = num + 10;
    cout << "Value inside callByValue function: " << num << endl;
}

void callByReference(int &num) {
    num = num + 10; // Changes original variable in main via alias
    cout << "Value inside callByReference function: " << num << endl;
}
