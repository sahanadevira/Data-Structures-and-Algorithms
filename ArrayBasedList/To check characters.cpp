#include <iostream>
#include <cctype>
using namespace std;

class Deduct
{
private:
    char ch;

public:
    void data();
    void check();
};

void Deduct::data()
{
    cout << "Enter a character: ";
    cin >> ch;
}

void Deduct::check()
{
    if (isalpha(ch))
        cout << "It is an alphabet";
    else if (isdigit(ch))
        cout << "It is a number";
    else
        cout << "It is a special character";
}

int main()
{
    Deduct d;

    d.data();
    d.check();

    return 0;
}
