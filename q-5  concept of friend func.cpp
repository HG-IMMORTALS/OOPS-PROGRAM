#include<iostream>
using namespace std;
class student
{
private:
int roll, marks1, marks2;
public:
void set(int x, int y, int z);
void get();
friend void add(student po);
};
void student::set(int x, int y, int z)
{
roll=x;
marks1=y;
marks2=z;
}
void student::get( )
{
cout<<"Printing student details : "<<endl;
cout<<"Roll no.: "<<roll<<" Marks1: "<<marks1<<" Marks2: "<<marks2<<endl;
}
void add(student po)
{
cout<<"Total marks is "<<po.marks1+po.marks2<<endl;
}
int main()
{
student obj1;
obj1.set(1,90,90);
obj1.get();
add(obj1);
}
