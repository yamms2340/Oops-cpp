#include <iostream>
using namespace std;

class Base {
public:
    int pub = 1;
protected:
    int pro = 2;
private:
    int pri = 3;
};

// 1. PUBLIC INHERITANCE
class PublicDerived : public Base {
public:
    void show() {
        cout << pub << " ";   // OK
        cout << pro << " ";   // OK
    }
};

// 2. PROTECTED INHERITANCE
class ProtectedDerived : protected Base {
public:
    void show() {
        cout << pub << " ";   // becomes protected
        cout << pro << " ";   // protected
    }
};

// 3. PRIVATE INHERITANCE
class PrivateDerived : private Base {
public:
    void show() {
        cout << pub << " ";   // becomes private
        cout << pro << " ";   // private
    }
};

int main() {

    PublicDerived a;
    a.show();          // OK
    cout << a.pub;     // OK (still public)
    // cout << a.pro;     //pro is protected.

    cout << endl;

    ProtectedDerived b;
    b.show();          // OK
    // b.pub;          // ERROR: pub is now protected

    cout << endl;

    PrivateDerived c;
    c.show();          // OK
    // c.pub;          // ERROR: pub is now private

    return 0;
}
