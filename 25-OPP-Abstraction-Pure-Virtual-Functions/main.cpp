#include <iostream>
using namespace std;

// Abstract Class (Cannot be instantiated directly)
class SmartAppliance {
public:
    // Pure Virtual Function
    virtual void bootDevice() = 0; 

    void commonPowerSpecs() {
        cout << "Power Input: 220V Standard AC" << endl;
    }
};

// Derived Class 1
class SmartAC : public SmartAppliance {
public:
    void bootDevice() override {
        cout << "Smart AC Booting: Setting compressor temperature to 24C." << endl;
    }
};

int main() {
    // SmartAppliance genericDevice; // This would cause a compile error!
    
    SmartAC roomAC;
    cout << "--- OOP Abstraction & Interfaces ---\n";
    roomAC.commonPowerSpecs();
    roomAC.bootDevice(); // Re-defined implementation triggered

    return 0;
}
