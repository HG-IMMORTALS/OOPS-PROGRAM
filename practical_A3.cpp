#include <iostream>
using namespace std;

class Person
{
private:
    string name;
    int rollno;

public:
    static int count;
    Person();
    void display();
    ~Person();
};

int Person::count = 0;

Person::Person()
{
    string s;
    int r;
    cin >> r;
    cin.ignore();
    getline(cin, s);
    name = s;
    rollno = r;

    count++;
}

void Person::display()
{
    cout << "Name: " << name << endl;
    cout << "Roll NO: " << rollno << endl;
}

Person::~Person()
{
    count--;
}
int main()
{
    Person obj, obj2, obj3, obj4;
    obj.display();
    obj2.display();
    obj3.display();
    obj4.display();
    cout << "Count of objects: " << Person::count << endl;
    return 0;
}