#include <iostream>
using namespace std;
class B {
public:
    int* p;
    B(int v) { p = new int(v); }
};
int main() {
    B obj1(10);
    B obj2 = obj1;
    *obj1.p = 9;
    cout << *obj1.p << endl;
    cout << *obj2.p << endl;
}
