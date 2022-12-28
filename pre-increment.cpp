#include<iostream>
using namespace std;
class weight{
	private:
		int kg,g;
	public:
		weight preinc();
		void display();
		void input();	
};
void weight::display()
{
	cout<<kg<<endl<<g<<endl;
}
void weight::input()
{
	cin>>kg>>g;
}
weight weight::preinc()
{
	    weight temp;
		temp.kg=++kg;
		temp.g=++g;
	return temp;
}
int main()
{
 weight obj1,obj2;
 obj1.input();
 obj1.display();
 obj2=obj2.preinc();
 obj2.display();
return 0;
}

