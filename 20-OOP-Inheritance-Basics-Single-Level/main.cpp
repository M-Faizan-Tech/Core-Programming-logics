#include <iostream>
#include <string>
using namespace std;

// Base Class (Parent)
class Person {
protected:
    string name;
    int age;

public:
    void setPersonDetails(string n, int a) {
        name = n;
        age = a;
    }
};

// Derived Class (Child inheriting from Person)
class Employee : public Person {
private:
    double salary;

public:
    void setSalary(double s) {
        salary = s;
    }

    void displayEmployee() {
        cout << "Employee Name: " << name << endl; // Accessing protected parent data
        cout << "Age: " << age << endl;           // Accessing protected parent data
        cout << "Salary: Rs." << salary << endl;
    }
};

int main() {
    Employee emp;
    
    cout << "--- Single-Level Inheritance Demo ---\n";
    emp.setPersonDetails("Muhammad Faizan", 21); // Calling parent function via child object
    emp.setSalary(75000);
    
    cout << "\n--- Displaying Inherited Records ---\n";
    emp.displayEmployee();

    return 0;
}
