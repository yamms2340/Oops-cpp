#include <iostream>
using namespace std;

class A {
private:
    int x = 10;

public:
    friend void show(A obj);   // friend function
};

void show(A obj) {
    cout << "Value of x = " << obj.x;
}

int main() {
    A a;
    show(a);
}
