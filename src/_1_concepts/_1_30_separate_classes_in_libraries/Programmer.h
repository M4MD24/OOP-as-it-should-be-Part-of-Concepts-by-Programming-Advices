#pragma once
#include "Employee.h"

class Programmer : public Employee {
    std::string mainProgrammingLanguage;

public:
    Programmer(
        const int &ID,
        const std::string &FIRST_NAME,
        const std::string &SECOND_NAME,
        const std::string &EMAIL,
        const std::string &COUNTRY_CODE,
        const std::string &CONTACT_NUMBER,
        const float &SALARY_NUMBER,
        const std::string &SYMBOL,
        const std::string &TITLE,
        const std::string &DEPARTMENT,
        const std::string &MAIN_PROGRAMMING_LANGUAGE
    ) : Employee(
        ID,
        FIRST_NAME,
        SECOND_NAME,
        EMAIL,
        COUNTRY_CODE,
        CONTACT_NUMBER,
        SALARY_NUMBER,
        SYMBOL,
        TITLE,
        DEPARTMENT
    ) {
        mainProgrammingLanguage = MAIN_PROGRAMMING_LANGUAGE;
    }

    void setMainProgrammingLanguage(
        const std::string &MAIN_PROGRAMMING_LANGUAGE
    ) {
        mainProgrammingLanguage = MAIN_PROGRAMMING_LANGUAGE;
    }

    std::string getMainProgrammingLanguage() {
        return mainProgrammingLanguage;
    }

    void print() {
        const std::string LINE = std::string(
            20,
            '-'
        ) + '\n';
        std::cout << LINE
            << "Programmer Information:" << std::endl
            << "ID: " << std::to_string(
                getID()
            ) << std::endl
            << "Full Name: " << getFullName() << std::endl
            << "Email: " << getEmail() << std::endl
            << "Mobile Number: " << getMobileNumber() << std::endl
            << "Salary: " << getSalary() << std::endl
            << "Job: " << getJob() << std::endl
            << "Main Programming Language: " << mainProgrammingLanguage << std::endl
            << LINE;
    }
};