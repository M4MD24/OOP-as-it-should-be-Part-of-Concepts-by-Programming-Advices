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
};

class B : A {
public:
    int number4 = 4;
    int getNumber4() { return number4; }
};

class C : public A {
public:
    int number5 = 4;
    int getNumber5() { return number5; }
};

int main() {
    A a;
    B b;
    C c;
    // Try objects to test visibility mode
}