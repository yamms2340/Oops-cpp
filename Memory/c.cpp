#include <iostream>
using namespace std;

int main() {
    
    int* p1 = new int;     // without ()
    int* p2 = new int();  // with ()
    int* p3 = new int(9);  // with ()
    string s;
    char c;
    cout<<s<<endl;
    cout<<c<<endl;
    cout << "Value at p1 (new int)  : " << *p1 << endl;   // garbage value
    cout << "Value at p2 (new int()): " << *p2 << endl;   // 0
    cout << "Value at p2 (new int()): " << *p3 << endl;   //9

    delete p1;
    delete p2;
    delete p3;

    return 0;
}
