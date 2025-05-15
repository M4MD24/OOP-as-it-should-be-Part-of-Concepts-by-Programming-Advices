#include <iostream>
#include <vector>
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
    ) { number = NUMBER; }

    size_t getNumber() { return number; }
};

int main() {
    vector<Thing> things;
    constexpr size_t COUNT_OF_THINGS = 10;

    for (size_t counter = 1; counter <= COUNT_OF_THINGS; ++counter) {
        const Thing THING(
            counter
        );
        things.push_back(
            THING
        );
    }

    for (Thing &THING : things)
        cout << THING.getNumber() << endl;
}