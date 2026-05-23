#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {            // virtual
        cout << "Base show\n";
    }
};

class Derived : public Base {
public:
    void show() override {//if its not virtual we cannot override it..
        cout << "Derived show\n";
    }
};

int main() {
    Base* b = new Derived();
    b->show();                        // Derived::show() (runtime polymorphism)
}
