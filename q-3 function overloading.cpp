#include<iostream>
using namespace std;
int add(int x, int y)
{
int sum=x+y;
return sum;
}
int add(int x, int y, int z)
{
int sum=x+y+z;
return sum;
}
int main()
{
int a,b,c;
cout<<"Enter two numbers "<<endl;
cin>>a>>b;
cout<<"The sum is "<<add(a,b)<<endl;
cout<<"Enter three numbers "<<endl;
cin>>a>>b>>c;
cout<<"The sum is "<<add(a,b,c)<<endl;
}
