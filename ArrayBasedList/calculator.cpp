#include <iostream>
using namespace std;

class Calculator
{
private:
    int a, b;
    float x;

public:
    void add();
    void sub();
    void multiply();
    void divide();
};

void Calculator::add()
{
    cout << "Enter 2 numbers: ";
    cin >> a >> b;

    x = a + b;
    cout << "Addition = " << x << endl;
}

void Calculator::sub()
{
    cout << "Enter 2 numbers: ";
    cin >> a >> b;

    x = a - b;
    cout << "Subtraction = " << x << endl;
}

void Calculator::multiply()
{
    cout << "Enter 2 numbers: ";
    cin >> a >> b;

    x = a * b;
    cout << "Multiplication = " << x << endl;
}

void Calculator::divide()
{
    cout << "Enter 2 numbers: ";
    cin >> a >> b;

    if (b == 0)
        cout << "Division by zero is not possible." << endl;
    else
    {
        x = (float)a / b;
        cout << "Division = " << x << endl;
    }
}

int main()
{
    Calculator c;

    c.add();
    c.sub();
    c.multiply();
    c.divide();

    return 0;
}
