#include <iostream>
#include <string>
using namespace std;

// Base Class 1
class AcademicRecord {
protected:
    float gpa = 3.85;
};

// Base Class 2
class SportsRecord {
protected:
    string sportsAchievement = "Gold Medalist (Cricket)";
};

// Derived Class inheriting from BOTH Base Class 1 and Base Class 2
class StudentProfile : public AcademicRecord, public SportsRecord {
public:
    void displayProfile() {
        cout << "--- Integrated Student Profile ---\n";
        cout << "Academic Merit Status: " << gpa << " GPA" << endl;
        cout << "Extracurricular Status: " << sportsAchievement << endl;
    }
};

int main() {
    StudentProfile profile;
    profile.displayProfile();
    return 0;
}
