#include <iostream>
using namespace std;

class Base {
public:
    Base() {        // ERROR: constructors cannot be virtual
        cout << "Base created\n";
    }
};

class Derived : public Base {
public:
    Derived() {
        cout << "Derived created\n";
    }
};

int main() {
    Base* b = new Derived;
    return 0;
}
