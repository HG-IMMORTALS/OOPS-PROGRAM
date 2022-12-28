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
    getline(cin, s);
    // cin.ignore();
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
    Student obj, obj2("Ayush", 55, 78);
    obj.display();
    obj2.display();
    return 0;
}