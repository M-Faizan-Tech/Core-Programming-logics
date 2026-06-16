#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter number of rows for patterns: ";
    cin >> rows;

    cout << "\n--- Pattern 1: Half Pyramid of Stars ---\n";
    for(int i = 1; i <= rows; ++i) {
        for(int j = 1; j <= i; ++j) {
            cout << "* ";
        }
        cout << "\n";
    }

    cout << "\n--- Pattern 2: Inverted Half Pyramid of Numbers ---\n";
    for(int i = rows; i >= 1; --i) {
        for(int j = 1; j <= i; ++j) {
            cout << j << " ";
        }
        cout << "\n";
    }

    return 0;
}
