#include<iostream>
using namespace std;
class car
{
	public:
		void start()
		{
			cout<<"\n the engine is started"<<endl;
		}
		
		void stop()
		{
			cout<<"\n the engine is stopped "<<endl;
		}
};



class innova: virtual car
{
	public:
		void start()
		{
			cout<<"\n the innova engine is started "<<endl;
		}
		
		void stop()
		{
			cout<<"\n the iinova engine is stopped"<<endl;
		}
};


class swift: virtual  car
{
	public:
		void start()
		{
			cout<<"\n the swift of the car is started "<<endl;
		}
		
		void stop()
		{
			cout<<"\n the swift of the car is stopped "<<endl;
		}
};

int main()
{
	innova car1;
	car1.start();
}
