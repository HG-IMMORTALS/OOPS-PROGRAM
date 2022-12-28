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
    Student(string s, int m, int e);
    Student(Student &temp);
};

Student::Student(string s, int m, int e)
{
    name = s;
    maths = m;
    english = e;
}

Student::Student(Student &temp)
{
    name = temp.name;
    maths = temp.maths;
    english = temp.english;
}

void Student::display()
{
    cout << "Name: " << name << endl;
    cout << "Maths Marks: " << maths << endl;
    cout << "English Marks: " << english << endl;
}

int main()
{
    Student obj("Ayush", 55, 78);
    Student obj2("Aryan", 67, 51);
    Student obj3(obj);

    obj.display();
    obj2.display();
    obj3.display();
    return 0;
}