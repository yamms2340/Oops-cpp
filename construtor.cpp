#include <iostream>
using namespace std;

class A {
    public:
    int x;
    private:
    A() : x(10) {              
        cout << "Private constructor called" << endl;
    }
    friend void show();
};

void show() {
    A obj;                    
    obj.x=9;
}

int main() {
    show();                   
    // A obj;//bcoz constructor is private 
    return 0;
}
