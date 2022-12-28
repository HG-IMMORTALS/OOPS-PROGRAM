#include<iostream>
using namespace std;
class A
{
protected:
int i,j;
public:
void add()
{
cout<<i+j;
}
};
class B
{
protected:
int k,l;
public:
void mul()
{
cout<<k*l;
}
};
class C:public A, public B
{
public:
void set(int w, int x, int y, int z)
{
i=w;
j=x;
k=y;
l=z;
}
void get()
{
cout<<"The values of four variables are :"<<endl;
cout<<i<<" "<<j<<" "<<k<<" "<<l<<" "<<endl;
}
void add()
{
cout<<"The sum of four variables is "<<i+j+k+l<<endl;
}
void mul()
{
cout<<"The product of four variables is "<<i*j*k*l<<endl;
}
};
int main()
{
C obj;
obj.set(10,20,30,40);
obj.get();
obj.add();
obj.mul();
}
