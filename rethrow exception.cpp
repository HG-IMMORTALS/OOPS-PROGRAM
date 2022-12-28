#include<iostream>
using namespace std;
void myhandler()
{
	try
	{
		throw "\nhello\n";
	}
	catch(const char *)
	{
		cout<<"\ncaught exception inside my handle\n";
		throw;
	}
}
int main()
{
	int x;
cout<<"main start\n";
try
{
	myhandler();
}
catch(const char *)
{
	cout<<"\ncaught expression in main\n";
}
//try
//{
//	cin>>x;
//	if(x==0)
//	  throw;
//	cout<<5/x<<endl;
//}
//catch(int x){
//	cout<<"\ndivide by 0\n";
//}
cout<<"\nmain end";
 return 0;
}

