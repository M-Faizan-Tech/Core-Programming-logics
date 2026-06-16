#include <iostream>
using namespace std;

// Using enum to make code readable
enum Operations { ADD = 1, SUBTRACT, MULTIPLY, DIVIDE, EXIT };

int main() {
    int choice;
    double num1, num2;

    while (true) {
        cout << "\n--- Interactive Math Dashboard ---\n";
        cout << "1. Addition (+)\n";
        cout << "2. Subtraction (-)\n";
        cout << "3. Multiplication (*)\n";
        cout << "4. Division (/)\n";
        cout << "5. Exit System\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == EXIT) {
            cout << "Exiting system. Thank you!" << endl;
            break;
        }

        if (choice >= ADD && choice <= DIVIDE) {
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
        }

        // Switch case linked with enum values
        switch (choice) {
            case ADD:
                cout << "Result: " << (num1 + num2) << endl;
                break;
            case SUBTRACT:
                cout << "Result: " << (num1 - num2) << endl;
                break;
            case MULTIPLY:
                cout << "Result: " << (num1 * num2) << endl;
                break;
            case DIVIDE:
                if (num2 != 0)
                    cout << "Result: " << (num1 / num2) << endl;
                else
                    cout << "Error: Division by zero is undefined!" << endl;
                break;
            default:
                cout << "Invalid Selection! Please choose between 1 and 5." << endl;
        }
    }
    return 0;
}
