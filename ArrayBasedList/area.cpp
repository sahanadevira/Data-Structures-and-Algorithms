#include <iostream>
using namespace std;

class Shape
{
private:
    int a, l, b;
    float r, h, area, pi;

public:
    Shape()
    {
        pi = 3.14;
    }

    void square();
    void rectangle();
    void circle();
    void triangle();
};

void Shape::square()
{
    cout << "Enter side: ";
    cin >> a;

    area = a * a;
    cout << "Area of Square = " << area << endl;
}

void Shape::rectangle()
{
    cout << "Enter length: ";
    cin >> l;

    cout << "Enter breadth: ";
    cin >> b;

    area = l * b;
    cout << "Area of Rectangle = " << area << endl;
}

void Shape::circle()
{
    cout << "Enter radius: ";
    cin >> r;

    area = pi * r * r;
    cout << "Area of Circle = " << area << endl;
}

void Shape::triangle()
{
    cout << "Enter base: ";
    cin >> b;

    cout << "Enter height: ";
    cin >> h;

    area = 0.5 * b * h;
    cout << "Area of Triangle = " << area << endl;
}

int main()
{
    Shape s;

    s.square();
    s.rectangle();
    s.circle();
    s.triangle();

    return 0;
}
