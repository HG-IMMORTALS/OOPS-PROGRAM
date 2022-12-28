#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int maths;
    int english;

public:
    void display();
    Student();
    Student(string s, int m, int e);
    ~Student();
};

Student::Student(string s, int m, int e)
{
    name = s;
    maths = m;
    english = e;
}

Student::Student()
{
    string s;
    int m, e;
    cout << "Enter the name\n";
    cin.ignore();
    getline(cin, s);
    cout << "Enter the marks in maths and english\n";
    cin >> m >> e;
    name = s;
    maths = m;
    english = e;
}

Student::~Student()
{
    cout << "Destructor Is Called\n";
    name = "";
    maths = english = 0;
}

void Student::display()
{
    cout << "Name: " << name << endl;
    cout << "Maths Marks: " << maths << endl;
    cout << "English Marks: " << english << endl;
}

int main()
{
    Student *obj = new Student();
    Student *obj2 = new Student("Panda", 80, 83);

    obj->display();
    obj2->display();

    Student obj3;
    Student *ptr = &obj3;
    ptr->display();
}
