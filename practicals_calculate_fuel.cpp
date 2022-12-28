#include <iostream>
using namespace std;

class Bill
{
private:
    string name;
    int units;
    double price;

public:
    void input();
    void display();
    void calculate();
};

void Bill::input()
{
    cout << "Enter the name of the person\n";
    getline(cin, name);
    cout << "Enter the units\n";
    cin >> units;

    calculate();
}

void Bill::display()
{
    cout << "Name: " << name << endl;
    cout << "Price: " << price << endl;
}

void Bill::calculate()
{
    price = 50;
    if (units < 100)
    {
        price += 0.60 * units;
    }
    else if (units > 100 && units < 300)
    {
        price += 0.80 * units;
    }
    else
        price += 0.90 * units;

    if (price > 300)
    {
        price += 0.15 * price;
    }
}

int main()
{
    Bill obj, obj2;
    obj.input();
    obj.display();
    return 0;
}