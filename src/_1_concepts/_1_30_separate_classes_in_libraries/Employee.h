#pragma once
#include "Person.h"

class Employee : public Person {
    struct Salary {
        float salaryCount {};
        std::string symbol;
    };

    struct Job {
        std::string title, department;
    };

    Salary salary;
    Job job;

public:
    Employee(
        const int &ID,
        const std::string &FIRST_NAME,
        const std::string &SECOND_NAME,
        const std::string &EMAIL,
        const std::string &COUNTRY_CODE,
        const std::string &CONTACT_NUMBER,
        const float &SALARY_NUMBER,
        const std::string &SYMBOL,
        const std::string &TITLE,
        const std::string &DEPARTMENT
    ) : Person(
        ID,
        FIRST_NAME,
        SECOND_NAME,
        EMAIL,
        COUNTRY_CODE,
        CONTACT_NUMBER
    ) {
        salary = {
            SALARY_NUMBER,
            SYMBOL
        };
        job = {
            TITLE,
            DEPARTMENT
        };
    }

    void setSalary(
        const float &SALARY_NUMBER,
        const std::string &SYMBOL
    ) {
        salary = {
            SALARY_NUMBER,
            SYMBOL
        };
    }

    std::string getSalary() {
        return std::to_string(
            salary.salaryCount
        ) + ' ' + salary.symbol;
    }

    void setJob(
        const std::string &TITLE,
        const std::string &DEPARTMENT
    ) {
        job = {
            TITLE,
            DEPARTMENT
        };
    }

    std::string getJob() {
        return job.title + ", " + job.department;
    }

    void print() {
        const std::string LINE = std::string(
            20,
            '-'
        ) + '\n';
        std::cout << LINE
            << "Employee Information:" << std::endl
            << "ID: " << std::to_string(
                getID()
            ) << std::endl
            << "Full Name: " << getFullName() << std::endl
            << "Email: " << getEmail() << std::endl
            << "Mobile Number: " << getMobileNumber() << std::endl
            << "Salary: " << getSalary() << std::endl
            << "Job: " << getJob() << std::endl
            << LINE;
    }
};