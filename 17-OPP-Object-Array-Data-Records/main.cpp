#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int rollNo;
    float marks;
    string name;

public:
    void inputDetails() {
        cout << "Enter Student Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter Roll Number: ";
        cin >> rollNo;
        cout << "Enter Marks: ";
        cin >> marks;
    }

    void displayDetails() {
        cout << "Name: " << name << " | Roll No: " << rollNo << " | Marks: " << marks << endl;
    }
};

int main() {
    int size;
    cout << "Enter number of students to record: ";
    cin >> size;

    Student classroom[50]; // Array of Class Objects

    cout << "\n--- Inputting Student Records ---\n";
    for(int i = 0; i < size; i++) {
        cout << "\nRecording Data for Position " << i + 1 << ":" << endl;
        classroom[i].inputDetails();
    }

    cout << "\n--- Classroom Database Report ---\n";
    for(int i = 0; i < size; i++) {
        classroom[i].displayDetails();
    }

    return 0;
}
