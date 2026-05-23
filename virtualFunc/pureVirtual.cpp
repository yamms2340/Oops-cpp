#include <iostream>
using namespace std;
class Shape {
public:
    virtual void draw() = 0;       // pure virtual
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Circle drawn\n";
    }
};

int main() {
    Shape* s = new Circle();
    s->draw();
}
