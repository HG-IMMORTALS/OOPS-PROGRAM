#include<iostream>
using namespace std;
class weight{
	private:
		int kg,g;
	public:
		weight maxobj(weight po);
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
weight weight::maxobj(weight po)
{
	weight temp;
	if(kg>po.kg)
	{
		temp.kg=g;
		temp.g=g;
	}
	else
	{
		temp.kg=po.kg;
		temp.g=po.g;
	}
	return temp;
}
int main()
{
 weight obj1,obj2,obj3;
 obj1.input();
 obj1.display();
 obj2.input();
 obj2.display();
 obj3=obj1.maxobj(obj2);
 obj3.display();
return 0;
}

