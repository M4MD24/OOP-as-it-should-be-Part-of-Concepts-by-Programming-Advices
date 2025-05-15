#include <iostream>
using namespace std;

class A {
    int number1 = 1;
    int getNumber1() { return number1; }

protected:
    int number2 = 2;
    int getNumber2() { return number2; }

public:
    int number3 = 3;
    int getNumber3() { return number3; }

    friend int sum(
        const A &A
    );
};

int sum(
    const A &A
) { return A.number1 + A.number2 + A.number3; }

int main() {
    constexpr A A;
    cout << "Sum: " << sum(
        A
    );
}