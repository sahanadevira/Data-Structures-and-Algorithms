#include<iostream>
using namespace std;

class denomination{
private:
    int amount;
public:
	void getAmount();
	void display();
};

void denomination::getAmount(){
        cout << "Enter the amount: Rs. ";
        cin >> amount;//remaing amount is calculated by modulo division.
    }

void denomination::display(){
        int notes;//notes is calculated by integer division.

        notes = amount / 2000;
        cout << "Rs.2000/- -> " << notes << endl;
        amount %= 2000;

        notes = amount / 500;
        cout << "Rs.500/- -> " << notes << endl;
        amount %= 500;

        notes = amount / 200;
        cout << "Rs.200/- -> " << notes << endl;
        amount %= 200;

        notes = amount / 100;
        cout << "Rs.100/- -> " << notes << endl;
        amount %= 100;

        notes = amount / 50;
        cout << "Rs.50/- -> " << notes << endl;
        amount %= 50;

        notes = amount / 20;
        cout << "Rs.20/- -> " << notes << endl;
        amount %= 20;

        notes = amount / 10;
        cout << "Rs.10/- -> " << notes << endl;
        amount %= 10;

        notes = amount / 5;
        cout << "Rs.5/- -> " << notes << endl;
        amount %= 5;

        notes = amount / 2;
        cout << "Rs.2/- -> " << notes << endl;
        amount %= 2;

        cout << "Re.1/- -> " << amount << endl;
    }


int main()
{
    denomination d;
    d.getAmount();
    d.display();

    return 0;
}
