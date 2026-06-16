#include <iostream>
using namespace std;

class ShapeArea {
public:
    // Overloaded Function 1: Area of a Square (1 parameter)
    int computeArea(int side) {
        return side * side;
    }

    // Overloaded Function 2: Area of a Rectangle (2 parameters)
    int computeArea(int length, int width) {
        return length * width;
    }

    // Overloaded Function 3: Area of a Circle (double parameter)
    double computeArea(double radius) {
        return 3.14159 * radius * radius;
    }
};

int main() {
    ShapeArea areaCalc;

    cout << "--- Function Overloading (Polymorphism) ---\n";
    cout << "Area of Square (Side 5): " << areaCalc.computeArea(5) << endl;
    cout << "Area of Rectangle (6x4): " << areaCalc.computeArea(6, 4) << endl;
    cout << "Area of Circle (Radius 3.5): " << areaCalc.computeArea(3.5) << endl;

    return 0;
}
