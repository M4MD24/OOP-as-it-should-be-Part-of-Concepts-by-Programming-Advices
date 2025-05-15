#pragma once

#include <iostream>

class Person {
    struct FullName {
        std::string firstName, secondName;
    };

    struct MobileNumber {
        std::string countryCode, contactNumber;
    };

    int id;
    FullName fullName;
    std::string email;
    MobileNumber mobileNumber;

public:
    Person(
        const int &ID,
        const std::string &FIRST_NAME,
        const std::string &SECOND_NAME,
        const std::string &EMAIL,
        const std::string &COUNTRY_CODE,
        const std::string &CONTACT_NUMBER
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
        const std::string &FIRST_NAME,
        const std::string &SECOND_NAME
    ) {
        fullName = {
            FIRST_NAME,
            SECOND_NAME
        };
    }

    std::string getFullName() { return fullName.firstName + ' ' + fullName.secondName; }

    void setEmail(
        const std::string &EMAIL
    ) { email = EMAIL; }

    std::string getEmail() { return email; }

    void setMobileNumber(
        const std::string &COUNTRY_CODE,
        const std::string &CONTACT_NUMBER
    ) {
        mobileNumber = {
            COUNTRY_CODE,
            CONTACT_NUMBER
        };
    }

    std::string getMobileNumber() { return mobileNumber.countryCode + mobileNumber.contactNumber; }

    void print() {
        const std::string LINE = std::string(
            20,
            '-'
        ) + '\n';
        std::cout << LINE
            << "Person Information:" << std::endl
            << "ID: " << std::to_string(
                id
            ) << std::endl
            << "Full Name: " << getFullName() << std::endl
            << "Email: " << email << std::endl
            << "Mobile Number: " << getMobileNumber() << std::endl
            << LINE;
    }

    void sendEmail(
        const std::string &SUBJECT,
        const std::string &BODY
    ) {
        std::cout << "Email sent to: " << email << std::endl
            << "Subject: " << SUBJECT << std::endl
            << "Body: " << BODY << std::endl;
    }

    void sendSMS(
        const std::string &MESSAGE
    ) {
        std::cout << "SMS sent to: " << getMobileNumber() << std::endl
            << "Message: " << MESSAGE << std::endl;
    }
};