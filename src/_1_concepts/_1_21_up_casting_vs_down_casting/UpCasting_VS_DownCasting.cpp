#include <iostream>
using namespace std;

class Person {
public:
    const string FULL_NAME = "Mohamed Sadawy";
};

class Employee : public Person {
public:
    const string TITLE = "Android Developer";
};

int main() {
    const Employee EMPLOYEE;
    cout << EMPLOYEE.FULL_NAME << endl;

    // Up Casting: Convert child to father
    const Person* FIRST_THING = &EMPLOYEE;
    cout << FIRST_THING->FULL_NAME << endl;

    // Down Casting: Convert father to child
    // Note: You can't do this
    // const Employee* SECOND_THING = &Person;
}