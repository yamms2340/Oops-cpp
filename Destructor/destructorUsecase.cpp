#include <iostream>
using namespace std;

class Student {
private:
    int* marks;   // HEAP memory (owned by this object)

public:
    int g;        // STACK variable (part of the object)

    // Constructor
    Student(int m) {
        g = 10;               // Stored in STACK with the object
        marks = new int;      // Stored in HEAP
        *marks = m;

        cout << "Constructor called" << endl;
    }

    // Destructor
    ~Student() {
        delete marks;        // ✅ HEAP memory freed here
        cout << "Destructor called: HEAP memory freed" << endl;

        // NOTE:
        // g is NOT deleted here.
        // g will be deleted automatically ONLY after this destructor finishes
        // when the stack memory of the object is released.
    }

    void show() {
        cout << "Marks: " << *marks << endl;
        cout << "g (stack): " << g << endl;
    }
};

int main() {

    cout << "Start of main()" << endl;

    Student s1(85);   // Object created in STACK
                      // g → STACK
                      // marks → HEAP

    s1.show();

    cout << "About to return from main()" << endl;

    return 0;  
    // ✅ EXACT DELETION POINT:
    // 1. ~Student() is called FIRST → delete marks → HEAP freed
    // 2. THEN the compiler frees STACK memory of s1 → g is deleted HERE
}
