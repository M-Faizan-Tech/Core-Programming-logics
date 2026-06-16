#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    // 1. Writing Data to a File
    ofstream outFile("database.txt");
    if (outFile.is_open()) {
        outFile << "Roll Number: 01\n";
        outFile << "Student Name: Muhammad Faizan\n";
        outFile << "Course: BS Computer Science\n";
        outFile.close();
        cout << "Data successfully saved to database.txt" << endl;
    } else {
        cout << "Error opening file for writing!" << endl;
    }

    // 2. Reading Data back from the File
    cout << "\n--- Reading Data From File ---" << endl;
    ifstream inFile("database.txt");
    string line;
    if (inFile.is_open()) {
        while (getline(inFile, line)) {
            cout << line << endl;
        }
        inFile.close();
    } else {
        cout << "Error opening file for reading!" << endl;
    }

    return 0;
}
