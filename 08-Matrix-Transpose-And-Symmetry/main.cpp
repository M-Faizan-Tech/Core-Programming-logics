#include <iostream>
using namespace std;

int main() {
    int mat[10][10], trans[10][10];
    int row, col, i, j;
    bool isSymmetric = true;

    cout << "Enter rows and columns of matrix: ";
    cin >> row >> col;

    cout << "Enter elements of matrix:\n";
    for(i = 0; i < row; ++i) {
        for(j = 0; j < col; ++j) {
            cin >> mat[i][j];
        }
    }

    // Logic 1: Finding Transpose
    for(i = 0; i < row; ++i) {
        for(j = 0; j < col; ++j) {
            trans[j][i] = mat[i][j];
        }
    }

    // Logic 2: Checking Symmetry (Only possible for Square Matrix)
    if (row != col) {
        isSymmetric = false;
    } else {
        for(i = 0; i < row; i++) {
            for(j = 0; j < col; j++) {
                if(mat[i][j] != trans[i][j]) {
                    isSymmetric = false;
                    break;
                }
            }
        }
    }

    cout << "\n--- Transpose Matrix ---\n";
    for(i = 0; i < col; ++i) {
        for(j = 0; j < row; ++j) {
            cout << trans[i][j] << " ";
        }
        cout << "\n";
    }

    if(isSymmetric)
        cout << "\nThe Matrix is Symmetric (Matrix == Transpose)." << endl;
    else
        cout << "\nThe Matrix is Asymmetric." << endl;

    return 0;
}
