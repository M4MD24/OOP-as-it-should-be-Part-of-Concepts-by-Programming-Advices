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

    // Copy Constructor
    Person(
        const Person& PERSON
    ) {
        firstName = PERSON.firstName;
        secondName = PERSON.secondName;
    }
};

int main() {
    Person firstPerson = Person(
        "Mohamed",
        "Sadawy"
    );

    cout << "First Person" << endl;
    cout << "First Name: " << firstPerson.getFirstName() << endl;
    cout << "Second Name: " << firstPerson.getSecondName() << endl;
    cout << "Full Name: " << firstPerson.fullName() << endl << endl;

    Person secondPerson = firstPerson;
    cout << "Second Person (Automatic Copy Constructor)" << endl;
    cout << "First Name: " << secondPerson.getFirstName() << endl;
    cout << "Second Name: " << secondPerson.getSecondName() << endl;
    cout << "Full Name: " << secondPerson.fullName() << endl << endl;

    Person thirdPerson = Person(
        firstPerson
    );
    cout << "Third Person (Manual Copy Constructor)" << endl;
    cout << "First Name: " << thirdPerson.getFirstName() << endl;
    cout << "Second Name: " << thirdPerson.getSecondName() << endl;
    cout << "Full Name: " << thirdPerson.fullName();
}