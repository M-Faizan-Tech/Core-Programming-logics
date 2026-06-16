#include <iostream>
using namespace std;

// Base Class
class DatabaseConnection {
public:
    // Virtual keyword enables runtime polymorphism / late binding
    virtual void connect() {
        cout << "Connecting to generic offline backup store..." << endl;
    }
};

// Derived Class 1
class MySQLDatabase : public DatabaseConnection {
public:
    void connect() override {
        cout << "Securely connected to live cloud MySQL Cluster database!" << endl;
    }
};

int main() {
    // Base class pointer targeting a Derived class object
    DatabaseConnection* dbPtr;
    MySQLDatabase liveCloudDB;
    
    dbPtr = &liveCloudDB;

    cout << "--- Runtime Polymorphism via Virtual Functions ---\n";
    // Virtual keyword ensures the MySQL connection triggers, not the generic one
    dbPtr->connect(); 

    return 0;
}
