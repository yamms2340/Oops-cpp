#include <iostream>
using namespace std;

class Hero {
public:
    int health;
    // Constructor: used for initialization
    Hero(int h) {
        this->health = h;//this is a pointer to the current object.
    }
    ~Hero() {   cout << "Destructor called (C++)" << endl;}
    //The tilde (~) before the class name indicates a destructor.
   //It is a special member function that runs automatically when an object is destroyed.
};

int main() {
    Hero h1(100);   // Object created on STACK
    cout << "Health of h1: " << h1.health << endl;

    Hero* h2 = new Hero(200);   // Object created on HEAP
    cout << "Health of h2: " << h2->health << endl;
    delete h2;   // Destructor called + memory freed manually
    return 0;    // h1 (stack object) destroyed here automatically
}
