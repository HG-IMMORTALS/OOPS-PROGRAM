#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
 double x=1.43335345;
 cout<<setprecision(5);
 cout<<"The precision is set on 5"<<" "<<x<<endl;
 cout<<setprecision(9);
 cout<<"The precision is set on 9"<<" "<<x<<endl;
return 0;
}

