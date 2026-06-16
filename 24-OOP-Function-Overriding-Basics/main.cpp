#include <iostream>
using namespace std;

// Base Class
class ParentProcessor {
public:
    void executeTask() {
        cout << "Parent Logic: Processing data using basic algorithms." << endl;
    }
};

// Derived Class
class ChildProcessor : public ParentProcessor {
public:
    // Overriding the executeTask function
    void executeTask() {
        cout << "Child Logic: Processing data using advanced optimized loops!" << endl;
    }
};

int main() {
    ChildProcessor childObj;
    
    cout << "--- Function Overriding Demonstration ---\n";
    // This will call the child's version of the function
    childObj.executeTask(); 

    return 0;
}
