#include <iostream>
#include <string>
using namespace std;

// Base Class (Grandparent level)
class Device {
protected:
    string brand = "Generic Tech";
};

// Derived Class 1 (Parent level inheriting from Device)
class Computer : public Device {
protected:
    string processor = "Intel Core i7";
};

// Derived Class 2 (Child level inheriting from Computer)
class Laptop : public Computer {
private:
    double batteryLife = 8.5;

public:
    void displaySpecs() {
        cout << "Brand: " << brand << endl;       // Inherited from Grandparent
        cout << "Processor: " << processor << endl; // Inherited from Parent
        cout << "Battery Life: " << batteryLife << " hours" << endl;
    }
};

int main() {
    Laptop myLaptop;

    cout << "--- Multi-Level Inheritance Chain ---\n";
    myLaptop.displaySpecs();

    return 0;
}
