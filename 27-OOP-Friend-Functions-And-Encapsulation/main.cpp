#include <iostream>
#include <string>
using namespace std;

class SecureSystem {
private:
    string adminPassword = "FaizanCS_Admin_2026";

public:
    // Friend Function Declaration
    friend void passwordBypassUtility(SecureSystem systemObj);
};

// Global Independent Function (Not a member of the class)
void passwordBypassUtility(SecureSystem systemObj) {
    // Accessing private member directly due to friendship grant
    cout << "[Friend Tool]: Accessing private key directly: " << systemObj.adminPassword << endl;
}

int main() {
    SecureSystem shield;
    cout << "--- OOP Friend Functions Demonstration ---\n";
    
    // Calling independent global function and passing class instance
    passwordBypassUtility(shield); 

    return 0;
}
