#include <iostream>
#include <string>
using namespace std;

// Smaller Component Class
class CPUProcessor {
public:
    string getModel() {
        return "Intel Core i7 (Hexa-Core)";
    }
};

// Larger Complex Class containing an instance of CPUProcessor
class HighEndComputer {
private:
    string systemBrand;
    CPUProcessor processor; // Composition: Computer HAS A Processor

public:
    HighEndComputer(string brand) {
        systemBrand = brand;
    }

    void bootSystem() {
        cout << "System " << systemBrand << " is booting up..." << endl;
        // Accessing component class methods safely
        cout << "Core Engine Hardware: " << processor.getModel() << " detected." << endl;
    }
};

int main() {
    cout << "--- OOP Class Composition (HAS-A Relationship) ---\n";
    
    HighEndComputer workstation("Faizan-Custom-Build-2026");
    workstation.bootSystem();

    return 0;
}
