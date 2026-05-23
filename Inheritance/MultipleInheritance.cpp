#include <iostream>
using namespace std;

class A {
public:
    void show() { cout << "From A\n"; }
};

class B {
public:
    void show() { cout << "From B\n"; }
        void showB() { cout << "From B\n"; }

};

class C : public A, public B {  
};

int main() {
    C obj;
    obj.showB();
    // obj.show();//error
    obj.A::show();   // Calls A's show()
    obj.B::show();   // Calls B's show()

    return 0;
}
