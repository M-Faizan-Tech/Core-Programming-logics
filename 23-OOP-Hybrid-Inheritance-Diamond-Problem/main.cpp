#include <iostream>
using namespace std;

// Grandparent Class
class University {
public:
    void uniName() {
        cout << "University System initialized." << endl;
    }
};

// Parent Class 1 (Virtual Inheritance)
class Faculty : virtual public University {};

// Parent Class 2 (Virtual Inheritance)
class Administration : virtual public University {};

// Child Class inheriting from both Faculty and Administration
class Management : public Faculty, public Administration {};

int main() {
    Management mgt;
    
    cout << "--- Hybrid Inheritance & Diamond Problem Resolution ---\n";
    // Using virtual inheritance avoids compiler ambiguity errors
    mgt.uniName(); 

    return 0;
}
