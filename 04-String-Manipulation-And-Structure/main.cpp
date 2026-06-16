#include <iostream>
#include <string>
using namespace std;

// Defining a Structure for Student Profile
struct Student {
    string name;
    int rollNumber;
    float gpa;
};

int main() {
    // Part 1: String Manipulation (Reverse String)
    string text;
    cout << "Enter a word or string to reverse: ";
    cin >> text;

    string reversedText = "";
    for (int i = text.length() - 1; i >= 0; i--) {
        reversedText += text[i];
    }
    cout << "Reversed String: " << reversedText << endl << endl;

    // Part 2: Working with Structures
    Student s1;
    cout << "Enter Student Name: ";
    cin.ignore(); // Clear buffer
    getline(cin, s1.name);
    cout << "Enter Roll Number: ";
    cin >> s1.rollNumber;
    cout << "Enter GPA: ";
    cin >> s1.gpa;

    cout << "\n--- Student Profile Recorded ---" << endl;
    cout << "Name: " << s1.name << endl;
    cout << "Roll Number: " << s1.rollNumber << endl;
    cout << "GPA: " << s1.gpa << endl;

    return 0;
}
