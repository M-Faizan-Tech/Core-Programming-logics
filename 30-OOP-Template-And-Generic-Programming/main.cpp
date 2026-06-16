#include <iostream>
using namespace std;

// Template definition to accept any data type data type T
template <typename T>
T findMax(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    cout << "--- Generic Programming via Templates ---\n";

    // Testing with Integers
    cout << "Max of integers (10, 20): " << findMax<int>(10, 20) << endl;

    // Testing with Floating points
    cout << "Max of floats (5.5, 2.3): " << findMax<float>(5.5, 2.3) << endl;

    // Testing with Characters
    cout << "Max of characters ('a', 'z'): " << findMax<char>('a', 'z') << endl;

    return 0;
}
