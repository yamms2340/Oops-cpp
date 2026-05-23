#include <iostream>
using namespace std;

class B {
public:
    int* p;                         // heap integer

    B(int v) { p = new int(v); }    // constructor

    B(const B& other) {             // deep copy constructor
        p = new int(*other.p);
    }

    B& operator=(const B& other) { // copy assignment
        if (this != &other) {
            delete p;               // free old memory
            p = new int(*other.p);  // deep copy new value
        }
        return *this;
    }
};

int main() {
    B obj1(10);       
    B obj2(obj1);        // deep copy
    *obj1.p = 9;         // change obj1 only
    cout << *obj1.p << endl;  // 9
    cout << *obj2.p << endl;  // 10
}
