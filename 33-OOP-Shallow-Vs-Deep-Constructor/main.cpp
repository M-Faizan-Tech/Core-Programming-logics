#include <iostream>
using namespace std;

class DeepCopyDemo {
private:
    int* dataPointer;

public:
    // Parameterized Constructor
    DeepCopyDemo(int value) {
        dataPointer = new int; // Allocating memory on Heap
        *dataPointer = value;
    }

    // Custom Copy Constructor enabling DEEP COPY
    DeepCopyDemo(const DeepCopyDemo &sourceObj) {
        dataPointer = new int; // Allocating a completely fresh memory address
        *dataPointer = *(sourceObj.dataPointer); // Copying the actual value, not the address
        cout << "[System]: Deep Copy Constructor executed successfully." << endl;
    }

    // Destructor
    ~DeepCopyDemo() {
        delete dataPointer;
    }

    void changeValue(int value) {
        *dataPointer = value;
    }

    void displayValue() {
        cout << "Stored Value: " << *dataPointer << " | Memory Address: " << dataPointer << endl;
    }
};

int main() {
    cout << "--- OOP Deep Copy vs Shallow Copy Layout ---\n";
    
    DeepCopyDemo obj1(100);
    cout << "Object 1: ";
    obj1.displayValue();

    // Triggering custom Deep Copy Constructor
    DeepCopyDemo obj2 = obj1; 
    cout << "Object 2: ";
    obj2.displayValue();

    // Changing values in Object 1 will NOT affect Object 2
    cout << "\nModifying Object 1 to 500...\n";
    obj1.changeValue(500);

    cout << "Object 1: ";
    obj1.displayValue();
    cout << "Object 2: ";
    obj2.displayValue(); // Stored value remains isolated and safe!

    return 0;
}
