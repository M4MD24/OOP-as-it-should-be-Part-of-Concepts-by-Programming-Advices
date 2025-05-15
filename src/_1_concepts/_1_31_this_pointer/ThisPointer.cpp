#include <iostream>
using namespace std;

class Thing {
public:
    int number;

    Thing(
        int number
    ) {
        this->number = ++number;
    }

    Thing(
        const Thing &THING
    ) {
        number = THING.number;
    }

    void function1() {
        Thing(
            *this
        );
    }
};

int main() {
    const Thing FIRST_THING {
        1
    };

    cout << FIRST_THING.number << endl;

    const Thing &SECOND_THING {
        FIRST_THING
    };

    cout << SECOND_THING.number;
}