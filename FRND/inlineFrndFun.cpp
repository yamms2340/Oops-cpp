#include <iostream>
using namespace std;

class Box {
private:
    int length;

public:
    Box(int l) : length(l) {}

    // Inline friend function
    friend void compare(Box b1, Box b2) {
        if (b1.length > b2.length)
            cout << "Box 1 is bigger";
        else
            cout << "Box 2 is bigger";
    }
};

int main() {
    Box a(10), b(20);
    compare(a, b);//compare is not member func of Box
}
