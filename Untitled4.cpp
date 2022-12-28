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
cout<<"\nmain start";
try
{
	myhandler();
}
catch(const char *)
{
	cout<<"\ncaught expression in main\n";
}
cout<<"\nmain end";
 return 0;
}

