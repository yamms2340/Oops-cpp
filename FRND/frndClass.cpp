#include <iostream>
using namespace std;

class A {
private:
    int secret = 100;

    friend class B;   // B is friend class
};

class B {
public:
    void reveal(A obj) {
        cout << obj.secret;
    }
};

int main() {
    A a;
    B b;
    b.reveal(a);
}
