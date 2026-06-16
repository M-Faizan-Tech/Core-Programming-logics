#include <iostream>
using namespace std;

class SystemUser {
public:
    // Static variable declared to hold global counter
    static int userCount; 

    SystemUser() {
        // Increments every time a new object is created
        userCount++; 
    }
};

// Definition and initialization of static member outside the class
int SystemUser::userCount = 0;

int main() {
    cout << "--- OOP Static Members & Global Tracking ---\n";
    cout << "Initial Users in System: " << SystemUser::userCount << endl;

    // Creating class objects
    SystemUser user1;
    SystemUser user2;
    SystemUser user3;

    // Accessing static variable via class name directly
    cout << "Active Users after object instantiation: " << SystemUser::userCount << endl;

    return 0;
}
