#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() = 0;         // pure virtual
};

// Pure virtual function with body
void Base::show() {
    cout << "Base show() implementation\n";
}

class Derived : public Base {
public:
    void show() override {
        cout << "Derived show() + calling Base::show()\n";
    }
};

int main() {
    Base* b = new Derived();
    b->show();
    delete b;
}
