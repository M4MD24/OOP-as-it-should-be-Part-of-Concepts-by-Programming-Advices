#include <iostream>
using namespace std;

class Thing {
public:
    static int function1() { return 1; }
    int function2() { return 2; }
};

int main() {
    Thing thing;
    cout << Thing::function1() << endl;
    cout << thing.function2();
}