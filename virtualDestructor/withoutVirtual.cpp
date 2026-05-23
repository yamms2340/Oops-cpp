#include <iostream>
using namespace std;

class Base {
  public:
    Base() { 
        // This runs first when creating a Derived object
        cout << "Base created\n"; 
    }

    ~Base() { 
        // This will be called when delete b is executed
        // BUT because it's NOT virtual, only this destructor will run
        cout << "Base destroyed\n"; 
    }    
};

class Derived: public Base {
  public:
    Derived() { 
        // This runs after Base() when creating the object
        cout << "Derived created\n"; 
    }

    ~Derived() {
        // This will NOT run when using delete b
        // because Base destructor is not virtual
        cout << "Derived destroyed\n"; 
    }
}; 

int main()
{
    // Creates a Derived object but stores it in a Base pointer
    Base *b = new Derived;

    // Problem: Base destructor is not virtual
    // So delete b calls ONLY Base::~Base()
    // Derived::~Derived() is skipped → memory leak for Derived part
    delete b;

    return 0;
}
