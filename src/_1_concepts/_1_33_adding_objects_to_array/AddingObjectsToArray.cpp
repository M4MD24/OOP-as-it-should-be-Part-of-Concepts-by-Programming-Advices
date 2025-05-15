#include <iostream>
using namespace std;

class Thing {
    size_t number;

public:
    Thing() {}

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
    constexpr size_t COUNT_OF_THINGS = 10;
    Thing *things = new Thing[COUNT_OF_THINGS];

    for (size_t index = 0; index < COUNT_OF_THINGS; ++index)
        things[index] = {
            index + 1
        };

    for (size_t index = 0; index < COUNT_OF_THINGS; ++index)
        things[index].print();

    delete[] things;
}