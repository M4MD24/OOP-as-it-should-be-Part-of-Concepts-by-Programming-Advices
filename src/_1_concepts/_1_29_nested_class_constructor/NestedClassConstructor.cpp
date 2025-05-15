#include <iostream>
using namespace std;

class Person {
    string name;

    class Job {
    public:
        string title;
        string department;

        Job(
            const string &TITLE,
            const string &DEPARTMENT
        ) {
            title = TITLE;
            department = DEPARTMENT;
        }

        void print() {
            cout << "Job:\n";
            cout << "Title: " << title << endl
                << "Department: " << department << endl;
        }
    };

public:
    Job job;

    Person(
        const string &NAME,
        const string &TITLE,
        const string &DEPARTMENT
    ): job(
        TITLE,
        DEPARTMENT
    ) {
        name = NAME;
        job.title = TITLE;
        job.department = DEPARTMENT;
    }
};

int main() {
    Person person(
        "Mohamed Sadawy",
        "Android Developer",
        "Mobile Development"
    );
    person.job.print();
}