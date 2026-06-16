#include <iostream>
using namespace std;

int main() {
    int a[2][2], b[2][2], mult[2][2];

    cout << "Enter elements of Matrix A (2x2):" << endl;
    for(int i = 0; i < 2; ++i)
        for(int j = 0; j < 2; ++j)
            cin >> a[i][j];

    cout << "Enter elements of Matrix B (2x2):" << endl;
    for(int i = 0; i < 2; ++i)
        for(int j = 0; j < 2; ++j)
            cin >> b[i][j];

    // Initializing multiplication matrix to 0
    for(int i = 0; i < 2; ++i)
        for(int j = 0; j < 2; ++j)
            mult[i][j] = 0;

    // Logic: Multiplying Matrix A and B
    for(int i = 0; i < 2; ++i) {
        for(int j = 0; j < 2; ++j) {
            for(int k = 0; k < 2; ++k) {
                mult[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    cout << "\nOutput Matrix (Result of A x B):" << endl;
    for(int i = 0; i < 2; ++i) {
        for(int j = 0; j < 2; ++j) {
            cout << mult[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
