#include<iostream>
using namespace std;
class A
{
protected:
int i,j;
public:
virtual void add()
{
cout<<"Sum of two numbers is "<<i+j<<endl;
}
void set(int x , int y)
{
i=x;
j=y;
}
};
class B:public A
{
protected:
int k;
public:
void add()
{
cout<<"Sum of three numbers is "<<i+j+k<<endl;
}
void set(int x , int y, int z)
{
i=x;
j=y;
k=z;
}
};
class C: public B
{
protected:
int l;
public:
void add()
{
cout<<"Sum of four numbers is "<<i+j+k+l<<endl;
}
void set(int w, int x , int y, int z)
{
i=w;
j=x;
k=y;
l=z;
}
};
int main()
{
A obja;
B objb;
C objc;
obja.set(10,20);
objb.set(10,20,30);
objc.set(10,20,30,40);
A &ref1 = obja;
cout<<"Calling virtual function through Base Class Reference to object of Class A"<<endl;
ref1.add();
A &ref2=objb;
cout<<"Calling virtual function through Base Class Reference to object of Class B"<<endl;
ref2.add();
A &ref3=objc;
cout<<"Calling virtual function through Base Class Reference to object of Class C"<<endl;
ref3.add();
}
