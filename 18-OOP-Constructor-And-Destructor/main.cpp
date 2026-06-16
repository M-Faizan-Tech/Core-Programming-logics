#include <iostream>
#include <string>
using namespace std;

class Account {
private:
    string holderName;
    double balance;

public:
    // 1. Default Constructor
    Account() {
        holderName = "Unknown";
        balance = 0.0;
        cout << "[System]: Default Constructor Called. Account Initialized." << endl;
    }

    // 2. Parameterized Constructor
    Account(string name, double initialBalance) {
        holderName = name;
        balance = initialBalance;
        cout << "[System]: Parameterized Constructor Called for " << holderName << "." << endl;
    }

    // 3. Destructor
    ~Account() {
        cout << "[System]: Destructor Called. Memory freed for account: " << holderName << "." << endl;
    }

    void display() {
        cout << "Holder: " << holderName << " | Balance: Rs." << balance << endl;
    }
};

int main() {
    cout << "--- Creating Object 1 ---" << endl;
    Account acc1; // Triggers Default
    acc1.display();

    cout << "\n--- Creating Object 2 ---" << endl;
    Account acc2("Muhammad Faizan", 25000.50); // Triggers Parameterized
    acc2.display();

    cout << "\n--- Scope Ending Soon ---" << endl;
    return 0;
}
