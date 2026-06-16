#include <iostream>
using namespace std;

class Test {
private:
    int privateX;
    float privateY;

public:
    int publicZ;

    // Setters to input private data
    void setX() { 
        cin >> privateX; 
    }
    void setY() { 
        cin >> privateY; 
    }

    // Getters to display private data
    void getX() { 
        cout << privateX; 
    }
    void getY() { 
        cout << privateY; 
    }
};

int main() {
    Test obj;
    
    cout << "--- OOP Access Specifiers Demo ---\n";
    obj.publicZ = 30; // Direct access possible because it is public

    cout << "Enter the value of private x: ";
    obj.setX(); // Accessing private data via public function
    
    cout << "Enter the value of private y: ";
    obj.setY();

    cout << "\n--- Displaying Encapsulated Values ---\n";
    cout << "The value of private x: ";
    obj.getX();
    cout << "\nThe value of private y: ";
    obj.getY();
    cout << "\nThe value of public z (Direct Access): " << obj.publicZ << endl;

    return 0;
}
