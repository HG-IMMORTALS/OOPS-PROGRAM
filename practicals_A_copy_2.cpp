#include <iostream>
using namespace std;

class Person
{
private:
    string *name;
    int *rollno;

public:
    Person();
    Person(string s, int no);
    Person(Person &temp);
    void display();
};

Person::Person()
{
    name = new string;
    rollno = new int;
    cout << "Enter the name and the rollno\n";
    cin >> *name >> *rollno;
}

Person::Person(string s, int no)
{
    name = new string;
    rollno = new int;
    name = &s;
    rollno = &no;
}

Person::Person(Person &temp)
{
    string *s = new string;
    int *no = new int;
    name = temp.name;
    rollno = temp.rollno;
}

void Person::display()
{
    cout << "Name: " << *name << endl;
    cout << "Roll No: " << *rollno << endl;
}
int main()
{
//    Person obj();
    Person obj2("Hemant", 12);
//    obj2.display();
    Person obj3(obj2);
    obj3.display();
    return 0;
}
