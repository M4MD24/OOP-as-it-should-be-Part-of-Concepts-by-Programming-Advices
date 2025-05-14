#include<iostream>
using namespace std;

class Person {
    string firstName,
           secondName;

public:
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
    Person person;

    person.setFirstName(
        "Mohamed"
    );
    person.setSecondName(
        "Sadawy"
    );

    cout << "First Name: " << person.getFirstName() << endl;
    cout << "Second Name: " << person.getSecondName() << endl;
    cout << "Full Name: " << person.fullName();
}