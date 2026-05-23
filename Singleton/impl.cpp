#include <iostream>
using namespace std;

class Singleton {
private:
    static Singleton* instance;  // holds the single object
    Singleton() {                // private constructor
        cout << "Singleton created\n";
    }

public:
    static Singleton* getInstance() {
        if (instance == nullptr)
            instance = new Singleton();
        return instance;
    }
};

// initialize static member
Singleton* Singleton::instance = nullptr;

int main() {
    Singleton* s1 = Singleton::getInstance();
    Singleton* s2 = Singleton::getInstance();

    // both pointers will have SAME object
    cout << (s1 == s2) << endl;   // prints 1 (true)
}
