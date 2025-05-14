#include <iostream>
using namespace std;

struct FullName {
    string firstName, secondName;
};

struct MobileNumber {
    string countryCode, contactNumber;
};

struct Salary {
    float salaryCount{};
    string symbol;
};

struct Job {
    string title, department;
};

class Person {
protected:
    static int id;
    FullName fullName;
    string email;
    MobileNumber mobileNumber;

public:
    Person() { ++id; }

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
        fullName = {
            FIRST_NAME,
            SECOND_NAME
        };
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
        mobileNumber = {
            COUNTRY_CODE,
            CONTACT_NUMBER
        };
    }

    string getMobileNumber() { return mobileNumber.countryCode + mobileNumber.contactNumber; }

    void print() {
        const string LINE = string(
            20,
            '-'
        ) + '\n';
        cout << LINE
            << "Employee Information:" << endl
            << "ID: " << to_string(
                id
            ) << endl
            << "Full Name: " << getFullName() << endl
            << "Email: " << email << endl
            << "Mobile Number: " << getMobileNumber() << endl
            << LINE;
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

int Person::id = 0;

class Employee : public Person {
    Salary salary;
    Job job;

public:
    void setSalary(
        const float& SALARY_NUMBER,
        const string& SYMBOL
    ) {
        salary = {
            SALARY_NUMBER,
            SYMBOL
        };
    }

    string getSalary() {
        return to_string(
            salary.salaryCount
        ) + ' ' + salary.symbol;
    }

    void setJob(
        const string& TITLE,
        const string& DEPARTMENT
    ) {
        job = {
            TITLE,
            DEPARTMENT
        };
    }

    string getJob() {
        return job.title + ", " + job.department;
    }
};

int main() {
    Employee employee;

    employee.setFullName(
        "Mohamed",
        "Sadawy"
    );
    employee.setEmail(
        "m4md24@gmail.com"
    );
    employee.setMobileNumber(
        "+20",
        "1555400034"
    );
    employee.setSalary(
        24000,
        "EGP"
    );
    employee.setJob(
        "Android Developer",
        "Mobile Development"
    );

    employee.print();

    employee.sendEmail(
        "Hello",
        "How are you?"
    );
    cout << endl;
    employee.sendSMS(
        "How are you?"
    );
}