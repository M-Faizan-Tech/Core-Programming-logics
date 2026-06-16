#include <iostream>
using namespace std;

class BoxVolume {
private:
    int capacity;

public:
    BoxVolume(int cap = 0) {
        capacity = cap;
    }

    // Overloading the Binary + Operator to add two object capacities
    BoxVolume operator + (BoxVolume const &obj) {
        BoxVolume resultBox;
        resultBox.capacity = this->capacity + obj.capacity;
        return resultBox;
    }

    void displayCapacity() {
        cout << "Box Capacity: " << capacity << " Liters" << endl;
    }
};

int main() {
    BoxVolume smallBox(20);
    BoxVolume largeBox(50);
    BoxVolume megaBox;

    cout << "--- Binary Operator Overloading Demo ---\n";
    smallBox.displayCapacity();
    largeBox.displayCapacity();

    // Adding two class objects directly using '+' symbol
    megaBox = smallBox + largeBox; 

    cout << "\nAfter executing combined math (megaBox = smallBox + largeBox):\n";
    megaBox.displayCapacity();

    return 0;
}
