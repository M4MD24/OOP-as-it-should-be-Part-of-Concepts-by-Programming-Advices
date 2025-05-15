#include "Programmer.h"
using namespace std;

int main() {
    Programmer programmer {
        1,
        "Mohamed",
        "Sadawy",
        "m4md24@gmail.com",
        "+20",
        "1555400034",
        24000,
        "EGP",
        "Android Developer",
        "Mobile Development",
        "Kotlin"
    };

    programmer.print();

    programmer.sendEmail(
        "Hello",
        "How are you?"
    );
    cout << endl;
    programmer.sendSMS(
        "How are you?"
    );
}