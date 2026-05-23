#include <bits/stdc++.h>
using namespace std;

class Employee {
public:
   static const int count=2;
   static const double count1=2;

    string eName;

    void setName(string name) {
        eName = name;
        // count++;//error const cannot be changed
    }
};
// const int Employee::count = 0;//initializing static variables
int main() {
    Employee e1, e2;
    e1.setName("Ammu");
    e2.setName("John");
    cout << e1.count;
        cout << e1.count1;

}
