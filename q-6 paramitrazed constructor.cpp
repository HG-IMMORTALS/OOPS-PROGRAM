#include<iostream>
using namespace std;
class student
{
private:
int roll, marks1, marks2;
public:
void set(int x, int y, int z);
void get();
void add();
student(int x, int y, int z);
};
void student::set(int x, int y, int z)
{
roll=x;
marks1=y;
marks2=z;
}
void student::get()
{
cout<<"Printing Student Details: "<<endl;
cout<<"Roll no.: "<<roll<<" Marks1: "<<marks1<<" Marks2: "<<marks2<<endl;
}
void student::add()
{
cout<<"Total marks is "<<marks1+marks2<<endl;
}
student::student(int x, int y, int z)
{
cout<<"Parameterized Constructor is called "<<endl;
roll=x;
marks1=y;
marks2=z;
}
int main()
{
student obj1(1,50,60);
obj1.get();
obj1.add();
}
