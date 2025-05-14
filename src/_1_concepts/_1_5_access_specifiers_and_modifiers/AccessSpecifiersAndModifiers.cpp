#include <iostream>
using namespace std;

class Person {
    int variable1 = 1;
    int function1() { return 1; }

protected:
    int variable2 = 2;
    int function2() { return 2; }

public:
    string firstName,
           secondName;
    string fullName() { return firstName + " " + secondName; }
    int function3() { return variable1 + variable2; }
};

int main() {
    Person person;
    person.firstName = "Mohamed";
    person.secondName = "Sadawy";
    cout << "Full Name: " << person.fullName() << endl;
    cout << "Function 3: " << person.function3();
}