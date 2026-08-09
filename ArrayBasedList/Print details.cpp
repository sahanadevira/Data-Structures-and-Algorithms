#include <iostream>
#include <string>
using namespace std;

class Smartphone
{
private:
    string make, model, processor;
    int year, memory;
    float price;

public:
    void data();
    void display();
};

void Smartphone::data()
{
    cout << "Enter Make: ";
    cin >> make;

    cout << "Enter Model: ";
    cin >> model;

    cout << "Enter Year: ";
    cin >> year;

    cout << "Enter Memory (GB): ";
    cin >> memory;

    cout << "Enter Processor: ";
    cin >> processor;

    cout << "Enter Price: ";
    cin >> price;
}

void Smartphone::display()
{
    cout << "\nSmartphone Details\n";

    cout << "Make      : " << make << endl;
    cout << "Model     : " << model << endl;
    cout << "Year      : " << year << endl;
    cout << "Memory    : " << memory << " GB" << endl;
    cout << "Processor : " << processor << endl;
    cout << "Price     : " << price << endl;
}

int main()
{
    Smartphone s;

    s.data();
    s.display();

    return 0;
}
