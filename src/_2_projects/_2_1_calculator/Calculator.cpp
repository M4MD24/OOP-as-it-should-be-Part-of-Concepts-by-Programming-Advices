#include <iostream>
using namespace std;

class Calculator {
    enum Operator {
        Add = '+',
        Subtract = '-',
        Multiply = '*',
        Divide = '/',
        Clear = ' '
    };

    long double lastValue = 0;
    Operator lastOperator = Clear;
    long double lastResult = 0;
    long double result = 0;

    static string checkOperator(
        const Operator& OPERATOR
    ) {
        switch (OPERATOR) {
        case Add:
            return "adding";
        case Subtract:
            return "subtracting";
        case Multiply:
            return "multiplying";
        case Divide:
            return "dividing";
        case Clear:
            return "clearing";
        default:
            return "";
        }
    }

public:
    void add(
        const long double& VALUE
    ) {
        lastOperator = Add;
        lastValue = VALUE;
        lastResult = result;
        result += VALUE;
    }

    void subtract(
        const long double& VALUE
    ) {
        lastOperator = Subtract;
        lastValue = VALUE;
        lastResult = result;
        result -= VALUE;
    }

    void multiply(
        const long double& VALUE
    ) {
        lastOperator = Multiply;
        lastValue = VALUE;
        lastResult = result;
        result *= VALUE;
    }

    void divide(
        const long double& VALUE
    ) {
        if (VALUE != 0)
            result /= VALUE;
        lastOperator = Divide;
        lastValue = VALUE;
        lastResult = result;
    }

    void clear() {
        lastValue = 0;
        lastOperator = Clear;
        result = 0;
    }

    void printResult() {
        cout << lastResult << " after " << checkOperator(
            lastOperator
        );

        if (lastOperator != Clear)
            cout << ' ' << lastValue;

        cout << " = " << to_string(
            result
        );

        if (
            lastOperator == Divide &&
            lastValue == 0
        )
            cout << ", Can't be divided by zero";

        cout << endl;
    }
};

int main() {
    Calculator calculator;

    calculator.add(
        10
    );
    calculator.printResult();

    calculator.add(
        100
    );
    calculator.printResult();

    calculator.subtract(
        20
    );
    calculator.printResult();

    calculator.divide(
        0
    );
    calculator.printResult();

    calculator.divide(
        2
    );
    calculator.printResult();

    calculator.multiply(
        3
    );
    calculator.printResult();

    calculator.clear();
    calculator.printResult();
}