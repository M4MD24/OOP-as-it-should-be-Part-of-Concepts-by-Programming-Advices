#include <iostream>
using namespace std;

class Thing {
    size_t number;

public:
    Thing(
        const size_t &NUMBER
    ) {
        number = NUMBER;
    }

    void setNumber(
        const size_t NUMBER
    ) {
        number = NUMBER;
    }

    size_t getNumber() {
        return number;
    }

    void print() {
        cout << number << endl;
    }
};

int main() {
    Thing things[] = {
        Thing(
            1
        ),
        Thing(
            2
        ),
        Thing(
            3
        ),
        Thing(
            4
        ),
        Thing(
            5
        ),
        Thing(
            6
        ),
        Thing(
            7
        ),
        Thing(
            8
        ),
        Thing(
            9
        ),
        Thing(
            10
        )
    };

    for (Thing &thing : things)
        thing.print();
}