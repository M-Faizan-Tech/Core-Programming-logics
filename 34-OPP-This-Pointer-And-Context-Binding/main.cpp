#include <iostream>
#include <string>
using namespace std;

class DeveloperProfile {
private:
    string name;
    int projectsCount;

public:
    // Parameter names match private attribute names exactly
    DeveloperProfile(string name, int projectsCount) {
        // Using 'this->' to resolve naming conflicts and bind to current object context
        this->name = name;
        this->projectsCount = projectsCount;
    }

    void displayProfile() {
        cout << "Developer Name: " << this->name << " | Confirmed Repositories: " << this->projectsCount << endl;
    }
};

int main() {
    cout << "--- OOP 'this' Pointer Context Binding ---\n";
    
    DeveloperProfile dev("Muhammad Faizan", 35);
    dev.displayProfile();

    return 0;
}
