#include <iostream>
#include <string>
using namespace std;

struct Book {
    int bookID;
    string title;
    float price;
};

int main() {
    int n;
    cout << "Enter the number of books to record: ";
    cin >> n;

    Book library[100]; // Array of structures

    for(int i = 0; i < n; i++) {
        cout << "\nEnter details for Book " << i + 1 << ":" << endl;
        cout << "Enter Book ID: ";
        cin >> library[i].bookID;
        cin.ignore(); // Clear buffer
        cout << "Enter Title: ";
        getline(cin, library[i].title);
        cout << "Enter Price: ";
        cin >> library[i].price;
    }

    cout << "\n--- Library Database Management System ---\n";
    for(int i = 0; i < n; i++) {
        cout << "ID: " << library[i].bookID 
             << " | Title: " << library[i].title 
             << " | Price: Rs." << library[i].price << endl;
    }

    return 0;
}
