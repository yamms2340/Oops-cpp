#include <iostream>
using namespace std;

class Student {
public:
    int roll;
    float marks;
    char grade;
    // Uncomment this constructor to see initialized values
    /*
    Student() {
        roll = 1;
        marks = 85.5;
        grade = 'A';
    }
    */
};
// Global object (automatically initialized)
Student s_global;
int main() {
    // Local object (not automatically initialized)
    Student s_local;
    cout << "----- Global Object (Default Initialized) -----" << endl;
    cout << "Roll  : " << s_global.roll << endl;
    cout << "Marks : " << s_global.marks << endl;
    cout << "Grade : " << (int)s_global.grade << endl;

    cout << endl;

    cout << "----- Local Object (Garbage Values) -----" << endl;
    cout << "Roll  : " << s_local.roll << endl;
    cout << "Marks : " << s_local.marks << endl;
    cout << "Grade : " << (int)s_local.grade << endl;

    return 0;
}
