#include<iostream>
using namespace std;
class bank
{
	protected :
	string acn;
	string name;
	int bal;
	public :
		void input();
		void chekbalence();
		void withdraw();
		void deposite();
		void detail();
	
};
class inte:public bank
{
	int rate;
	int x;
	int t;
	
	public:
		int  imp()
		{
			cout<<"enter the rate of interest"<<endl;
			cin>>rate;
			cout<<"enter the time"<<endl;
			cin>>t;
			x=(rate*bal*t)/100;
			return x;
			
			
		}
		void che()
		{
			cout<<"interest is "<<endl;
			int s=imp();
			cout<<s<<endl;
			bal=bal+s;
			
		}
};
	
	

void bank::input()
{
	cout<<"enter account no."<<endl;
	getline(cin,acn);
	cout<<"enter name of account hpolder."<<endl;
	getline(cin,name);
	cout<<"enter amount to deosite intially"<<endl;
    cin>>bal;
	
}
void bank::chekbalence()
{
	cout<<"you balcance is "<<endl;
	cout<<bal;
}
void bank::withdraw()
{
	if(bal<=0)
	{
		cout<<"cant withdraw money "<<endl;
		return ;
		
	}
	cout<<"ennter the amount to be withdraw"<<endl;
	int t;
	cin>>t;
	if(t>bal)
	{
		cout<<"cant withdraw moneuy greator than amount "<<endl;
		return ;
		
	}
	bal=bal-t;
}
void bank::deposite()
{
	int de;
	cout<<"enter the amount of deposite "<<endl;
	cin>>de;
	bal=bal+de;
}
void bank::detail()
{
	cout<<"your account detial is "<<endl;
	cout<<acn<<endl<<name<<endl<<bal;
}
int main()
{
	inte obj;int ch;
	
	obj.input();
	while(1)
	{
		cout<<"\n1.check balance \n2.withdraw\n3.deposite\n4.detail of account\n5.interest\n6.exit "<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:obj.chekbalence();
			break;
			case 2:obj.withdraw();
			break;
			case 3:obj.deposite();
			break;
			case 4:obj.detail();
			
			break;
			case 5:obj.che();
			break;
			case 6:return 0;
		}
	}
}
