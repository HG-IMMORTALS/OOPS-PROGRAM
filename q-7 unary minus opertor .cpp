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
student operator-(student po);
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
student student::operator-(student po)
{
student temp;
temp.roll=3;
temp.marks1 = marks1-po.marks1;
temp.marks2 = marks2-po.marks2;
return temp;
}
int main()
{
student obj1, obj2;
obj1.set(1,50,60);
obj1.get();
obj1.add();
obj2.set(2,40,50);
obj2.get();
obj2.add();
student obj3;
cout<<"Create obj3. It will contain difference of obj1 and obj2 "<<endl;
obj3=obj1-obj2;
obj3.get();
}
