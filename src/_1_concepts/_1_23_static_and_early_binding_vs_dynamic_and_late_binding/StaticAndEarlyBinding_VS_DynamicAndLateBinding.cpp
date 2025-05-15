#include <iostream>
using namespace std;

class Person {
public:
    virtual void print() {
        cout << "I'm Person" << endl;
    }
};

class Student : public Person {
public:
    void print() override {
        cout << "I'm Student" << endl;
    }
};

class Teacher : public Person {
public:
    void print() override {
        cout << "I'm Teacher" << endl;
    }
};

int main() {
    // Static and Early Binding
    Student student;
    Teacher teacher;

    student.print();
    teacher.print();

    // Dynamic and Late Binding
    Person *anotherStudent = &student,
           *anotherTeacher = &teacher;

    anotherStudent->print();
    anotherTeacher->print();
}