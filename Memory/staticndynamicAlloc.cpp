#include <iostream>
using namespace std;
class Hero {
public:
    int health;
    void setHealth(int h) {
        health = h;
    }
    int getHealth() {
        return health;
    }
};

int main() {
    // -------- Static (Stack) Object --------
    Hero a;                 // normal object
    a.setHealth(100);       // accessed using dot operator
    cout << "Static Object Health: " << a.getHealth() << endl;

    // -------- Dynamic (Heap) Object --------
    Hero* b = new Hero;     // pointer to object created using new
    b->setHealth(70);       // accessed using arrow operator
    cout << "Dynamic Object Health (->): " << b->getHealth() << endl;

    // Same access using dereference + dot
    cout << "Dynamic Object Health ((*b).): " << (*b).getHealth() << endl;

    // Free heap memory
    delete b;

    return 0;
}
