#include <bits/stdc++.h>
using namespace std;
class Person {
public:
    string name;
    int age;
    Person(string name, int age) {
        this->name = name;
        this->age = age;
    }
    void displayPerson() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

class Student : public Person {
public:
    int rollno;
    Student(string name, int age, int rollno) : Person(name, age) {
        this->rollno = rollno;
    }
    void displayStudent() {
        cout << "Name: " << name 
             << ", Age: " << age 
             << ", Roll No: " << rollno << endl;
    }
};
int main() {
    Student s("Ammu", 20, 15);
    cout << "Displaying using Student method:" << endl;
    s.displayStudent();
    cout << "Displaying inherited Person part:" << endl;
    s.displayPerson();
    return 0;
}
