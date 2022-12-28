#include <iostream>
using namespace std;

class Employee
{
private:
    string name;
    int id;
    int salary;

public:
    Employee();
    Employee(string s, int ID, int num);
    void calculate();
    void calculate(int bonus);
    void display();
};

Employee::Employee()
{
    string s;
    int ID, num;
    cout << "Enter\n";
    getline(cin, s);
    cin >> ID >> num;
    name = s;
    id = ID;
    salary = num;
}

Employee::Employee(string s, int ID, int num)
{
    name = s;
    id = ID;
    salary = num;
}

void Employee::calculate()
{
    int bonus;
    cout << "Enter Bonus\n";
    cin >> bonus;
    salary += bonus;
}

void Employee::calculate(int bonus)
{
    salary += bonus;
}

void Employee::display()
{
    cout << "Name: " << name << endl;
    cout << "ID: " << id << endl;
    cout << "Salary With Bonus: " << salary << endl;
}

int main()
{
    Employee obj, obj2("Nishant", 34, 60000);
    obj.calculate();
    obj2.calculate(10000);
    obj.display();
    obj2.display();
    return 0;
}