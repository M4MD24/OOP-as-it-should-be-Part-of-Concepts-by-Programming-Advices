#include <iostream>
using namespace std;

class Thing {
public:
    int number = 0;
    static int counter;

    Thing() {
        counter++;
    }

    void print() {
        cout << "Number = " << number << endl;
        cout << "Counter = " << counter << endl << endl;
    }
};

int Thing::counter = 0;

int main() {
    Thing firstThing;
    firstThing.number = 10;
    Thing secondThing;
    secondThing.number = 20;
    Thing thirdThing;
    thirdThing.number = 30;

    firstThing.print();
    secondThing.print();
    thirdThing.print();

    cout << "Counter" << Thing::counter;
}