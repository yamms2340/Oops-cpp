#include <iostream>
using namespace std;

class Base {
public:
    void show() {                    
        cout << "Base show\n";
    }
};

class Derived : public Base {
public:
    void show() {                    // overrides syntactically
        cout << "Derived show\n";
    }
};

int main() {
    Base* b = new Derived();         // Base pointer → Derived object
    b->show();                        // Base::show() (static binding)

    Derived d;
    d.show();                         // Derived::show() (static type Derived)
}
