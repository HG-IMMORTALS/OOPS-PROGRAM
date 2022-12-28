#include<iostream>
using namespace std;
class A
{
protected:
int i,j;
public:
void add()
{
cout<<"The sum is ";
cout<<i+j<<endl;
}
};
class B: virtual public A
{
protected:
public:
void mul()
{
cout<<"The product is ";
cout<<i*j<<endl;
}
};
class C: virtual public A
{
protected:
public:
void div()
{
cout<<i/j;
}
};
class D:public B, public C
{
public:
void set(int x, int y)
{
i=x;
j=y;
}
void get()
{
cout<<"The values of two variables are :"<<endl;
cout<<i<<" "<<j<<" "<<endl;
}
};
int main()
{
D obj;
obj.set(10,20);
obj.get();
obj.add();
obj.mul();
}
