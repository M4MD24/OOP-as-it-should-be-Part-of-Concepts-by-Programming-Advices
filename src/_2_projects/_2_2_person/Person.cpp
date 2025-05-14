#include <iostream>
using namespace std;

struct MobileNumber {
    string countryCode,
           contactNumber;
};

struct FullName {
    string firstName,
           secondName;
};

class Person {
    int id;
    FullName fullName;
    string email;
    MobileNumber mobileNumber;

public:
    Person(
        const int& ID,
        const string& FIRST_NAME,
        const string& SECOND_NAME,
        const string& EMAIL,
        const string& COUNTRY_CODE,
        const string& CONTACT_NUMBER
    ) {
        id = ID;
        fullName = {
            FIRST_NAME,
            SECOND_NAME
        };
        email = EMAIL;
        mobileNumber = {
            COUNTRY_CODE,
            CONTACT_NUMBER
        };
    }

    int getID() { return id; }

    void setFullName(
        const string& FIRST_NAME,
        const string& SECOND_NAME
    ) {
        fullName.firstName = FIRST_NAME;
        fullName.secondName = SECOND_NAME;
    }

    string getFullName() { return fullName.firstName + ' ' + fullName.secondName; }

    void setEmail(
        const string& EMAIL
    ) { email = EMAIL; }

    string getEmail() { return email; }

    void setMobileNumber(
        const string& COUNTRY_CODE,
        const string& CONTACT_NUMBER
    ) {
        mobileNumber.countryCode = COUNTRY_CODE;
        mobileNumber.contactNumber = CONTACT_NUMBER;
    }

    string getMobileNumber() { return mobileNumber.countryCode + mobileNumber.contactNumber; }

    void printInformation() {
        cout << string(
                20,
                '-'
            ) << endl
        << "Person Information:" << endl
            << "ID: " << to_string(
                id
            ) << endl
            << "Full Name: " << getFullName() << endl
            << "Email: " << email << endl
            << "Mobile Number: " << getMobileNumber() << endl
            << string(
                20,
                '-'
            ) << endl;
    }

    void sendEmail(
        const string& SUBJECT,
        const string& BODY
    ) {
        cout << "Email sent to: " << email << endl
            << "Subject: " << SUBJECT << endl
            << "Body: " << BODY << endl;
    }

    void sendSMS(
        const string& MESSAGE
    ) {
        cout << "SMS sent to: " << getMobileNumber() << endl
            << "Message: " << MESSAGE << endl;
    }
};

int main() {
    Person person{
        1,
        "Mohamed",
        "Sadawy",
        "m4md24@gmail.com",
        "+20",
        "1555400034"
    };

    person.printInformation();

    person.sendEmail(
        "Hello",
        "How are you?"
    );

    cout << endl;

    person.sendSMS(
        "How are you?"
    );
}