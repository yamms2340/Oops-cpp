#include <iostream>
using namespace std;

class Simple {
public:
    int x;

    Simple(int v) {
        x = v;
    }
};

int main() {
    Simple a(10);
    Simple b(a);  
    Simple c=a;  
    cout << a.x << endl;   // 10
    cout << b.x << endl;   // 10
    cout << c.x << endl;   // 10

}
