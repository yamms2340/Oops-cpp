#include <iostream>
using namespace std;

class Hero {
public:
    int health;
    char level;
     private:
     void print() {
        cout << "Level: " << level << endl;
    }
public:
int hat;
void show() {
    print();
    }
};

int main() {
    Hero h;

    h.health = 100;
    h.level = 'A';
    h.hat = 5;

    cout << "Health: " << h.health << endl;
    cout << "Hat: " << h.hat << endl;

    h.show();

    return 0;
}
