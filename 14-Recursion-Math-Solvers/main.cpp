#include <iostream>
using namespace std;

// Recursive function to find Fibonacci numbers
int fibonacci(int n) {
    if (n <= 1)
        return n; // Base Case
    return fibonacci(n - 1) + fibonacci(n - 2); // Recursive Case
}

int main() {
    int terms;
    cout << "Enter the number of terms for Fibonacci Series: ";
    cin >> terms;

    cout << "Fibonacci Series using Recursion: ";
    for (int i = 0; i < terms; i++) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;

    return 0;
}
