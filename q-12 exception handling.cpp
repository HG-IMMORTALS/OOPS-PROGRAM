#include<iostream>
using namespace std;
int main()
{
int a;
cout<<"Enter a number"<<endl;
cin>>a;
try
{
if(a==0)
throw 100;
cout<<"5000 divided by a is "<<5000/a<<endl;
}
catch(int x)
{
cout<<"Can't Divide by zero"<<endl;
cout<<"Error code is "<<x<<endl;
}
}
