#include <iostream>
using namespace std;

class Base {
  public:
    Base() { 
        cout << "Base created\n"; 
    }

    // Virtual destructor ensures correct destructor call through Base*
    virtual ~Base() { 
        cout << "Base destroyed\n"; 
    }
};

class Derived: public Base {
  public:
    Derived() { 
        // After Base() finishes, this runs
        cout << "Derived created\n"; 
    }

    ~Derived() {
        // Called first during delete because Base destructor is virtual
        cout << "Derived destroyed\n"; 
    }
}; 

int main()
{
    // Creates a Derived object but stores it in a Base pointer
    Base *b = new Derived;

    // Because Base destructor is virtual:
    // 1. Derived destructor runs
    // 2. Then Base destructor runs
    delete b;

    return 0;
}
