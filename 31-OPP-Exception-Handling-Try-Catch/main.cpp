#include <iostream>
using namespace std;

int main() {
    double numerator, denominator, result;

    cout << "Enter numerator: ";
    cin >> numerator;
    cout << "Enter denominator: ";
    cin >> denominator;

    cout << "\n--- Processing Division ---\n";
    try {
        // Checking for runtime anomaly
        if (denominator == 0) {
            throw "Error: Division by zero is mathematically undefined!"; // Throwing string exception
        }
        
        result = numerator / denominator;
        cout << "Calculation Successful! Result: " << result << endl;
    }
    catch (const char* errorMsg) {
        // Intercepting the thrown error to prevent program crash
        cout << "[Interception]: " << errorMsg << endl;
    }

    cout << "\nSystem Integrity Intact. Program continuous execution safely..." << endl;
    return 0;
}
