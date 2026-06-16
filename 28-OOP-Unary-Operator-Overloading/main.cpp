#include <iostream>
using namespace std;

class ScoreCounter {
private:
    int points;

public:
    ScoreCounter() {
        points = 10; // Starting with base points
    }

    // Overloading the Unary Prefix ++ Operator
    void operator ++ () {
        points = points + 5; // Custom behavior: Increments by 5 instead of 1
    }

    void display() {
        cout << "Current Score Points: " << points << endl;
    }
};

int main() {
    ScoreCounter teamScore;
    
    cout << "--- Unary Operator Overloading Demo ---\n";
    teamScore.display();

    // Triggering custom overloaded ++ operator directly on class object
    ++teamScore; 
    
    cout << "\nAfter executing (++teamScore) custom logic:\n";
    teamScore.display();

    return 0;
}
