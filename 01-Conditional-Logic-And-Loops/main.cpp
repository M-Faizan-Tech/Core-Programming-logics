#include <iostream>
using namespace std;

int main() {
    int num, i;
    bool isPrime = true;
    unsigned long long factorial = 1;

    cout << "Enter a positive integer: ";
    cin >> num;

    if (num <= 0) {
        cout << "Error: Number must be positive!" << endl;
        return 1;
    }

    // Logic 1: Check Prime Number
    if (num == 1) {
        isPrime = false;
    } else {
        for (i = 2; i <= num / 2; ++i) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    // Logic 2: Calculate Factorial using Loop
    for (i = 1; i <= num; ++i) {
        factorial *= i;
    }

    // Displaying Results
    if (isPrime)
        cout << num << " is a Prime Number." << endl;
    else
        cout << num << " is a Composite Number." << endl;

    cout << "Factorial of " << num << " is: " << factorial << endl;

    return 0;
}
