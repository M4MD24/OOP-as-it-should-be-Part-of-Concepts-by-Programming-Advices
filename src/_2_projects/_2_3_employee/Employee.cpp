#include <iostream>
using namespace std;

struct FullName {
    string firstName,
           secondName;
};

struct MobileNumber {
    string countryCode,
           contactNumber;
};

struct Salary {
    float salaryCount{};
    string symbol;
};

struct Job {
    string title,
           department;
};

class Employee {
    int id;
    FullName fullName;
    string email;
    MobileNumber mobileNumber;
    Salary salary;
    Job job;

public:
    Employee(
        const int& ID,
        const string& FIRST_NAME,
        const string& SECOND_NAME,
        const string& EMAIL,
        const string& COUNTRY_CODE,
        const string& CONTACT_NUMBER,
        const float& SALARY_NUMBER,
        const string& SYMBOL,
        const string& TITLE,
        const string& DEPARTMENT
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
        salary = {
            SALARY_NUMBER,
            SYMBOL
        };
        job = {
            TITLE,
            DEPARTMENT
        };;
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
            << "Salary: " << getSalary() << endl
            << "Job: " << getJob() << endl
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

int main() {
    Employee employee{
        1,
        "Mohamed",
        "Sadawy",
        "m4md24@gmail.com",
        "+20",
        "1555400034",
        24000,
        "EGP",
        "Android Developer",
        "Mobile Development"
    };

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