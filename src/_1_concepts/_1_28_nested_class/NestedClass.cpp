#include <iostream>
using namespace std;

class Person {
    string name;

    class Job {
    public:
        string title;
        string department;

        void print() {
            cout << "Job:\n";
            cout << "Title: " << title << endl
                << "Department: " << department << endl;
        }
    };

public:
    Job job;

    Person() {
        name = "Mohamed Sadawy";
        job.title = "Android Developer";
        job.department = "Mobile Development";
    }
};

int main() {
    Person person;
    person.job.print();
}