#include<iostream>
#include<string.h>
using namespace std;
class animal
{
	public:
		string s;
		void dog();
		void cat();
};
void animal::dog() 
{
	string p="bark";
	int i=0;
	while(s[i]!='\0' && p[i]!='\0')
	{
		if(s[i]==p[i])
		  i++;
		else
		  return;
	}
	cout<<"DOG";
}
void animal::cat()
{
	string p="meow";
	int i=0;
	while(s[i]!='\0' && p[i]!='\0')
	{
		if(s[i]==p[i])
		  i++;
		else
		 return;
	}
	cout<<"CAT";
}
int main()
{
  animal obj,obj2;
  cout<<"enter the sound of animal"<<endl;
  getline(cin,obj.s);
  getline(cin,obj2.s);
  obj.dog();
  cout<<endl;
  obj2.cat();
return 0;
}

