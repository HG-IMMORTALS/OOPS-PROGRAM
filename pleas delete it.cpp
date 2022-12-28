#include<iostream>
using namespace std;
class test
{
	private:
		int marks1,marks2;
	public:
		test(int x, int y);
		void print();
};


test::test(int x, int y)
{
	marks1=x;
	marks2=y;
}


 void test::print()
 {
 	cout<<"\n the value of the marks is "<<marks1<<" and "<<marks2<<endl;
 }

int main()
{   int x,y;
    cout<<"\n enter the value of x and y"<<endl;
    cin>>x>>y;
	test t1(x,y);
	t1.print();
	return 0;
}
