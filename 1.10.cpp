#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    void set_input() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void get_info() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
public:
    int rollNo;

    void set_student() {
        set_input();
        cout << "Enter roll number: ";
        cin >> rollNo;
    }

    void get_student() {
        get_info();
        cout << "Roll Number: " << rollNo << endl;
    }
};

int main() {
    Student s1;
    s1.set_student();
    s1.get_student();
    return 0;
}