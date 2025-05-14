#include<iostream>
using namespace std;

class Person {
    string firstName,
           secondName;

public:
    Person(
        const string& FIRST_NAME,
        const string& SECOND_NAME
    ) {
        firstName = FIRST_NAME;
        secondName = SECOND_NAME;
    }

    string getFirstName() {
        return firstName;
    }

    string getSecondName() {
        return secondName;
    }

    void setFirstName(
        const string& FIRST_NAME
    ) {
        firstName = FIRST_NAME;
    }

    void setSecondName(
        const string& SECOND_NAME
    ) {
        secondName = SECOND_NAME;
    }

    string fullName() {
        return firstName + " " + secondName;
    }
};

int main() {
    Person person = Person(
        "Mohamed",
        "Sadawy"
    );

    cout << "First Name: " << person.getFirstName() << endl;
    cout << "Second Name: " << person.getSecondName() << endl;
    cout << "Full Name: " << person.fullName();
}