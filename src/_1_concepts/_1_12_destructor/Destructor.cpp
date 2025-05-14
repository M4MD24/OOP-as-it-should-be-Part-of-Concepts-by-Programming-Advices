#include <iostream>
using namespace std;

class Thing {
public:
    Thing() { cout << "Hello, I'm Constructor" << endl; }
    ~Thing() { cout << "Hello, I'm Destructor" << endl; }
};

void function1() { const Thing THING; }

void function2() {
    const Thing* THING = new Thing;
    delete THING;
}

int main() {
    function1();
    cout << endl;
    function2();
}