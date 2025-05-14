#include <iostream>
using namespace std;

class Person {
public:
    string firstName,
           secondName;
    string fullName() { return firstName + " " + secondName; }
};

int main() {
    Person person;
    person.firstName = "Mohamed";
    person.secondName = "Sadawy";
    cout << person.fullName();

    string text;
}