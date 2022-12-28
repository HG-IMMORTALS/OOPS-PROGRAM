#include <iostream>
using namespace std;
int main()
{
	double x = 1.23;
	cout.precision(3);	
	cout << "without scientific flag: "<< x << endl;
	cout << "with scientific flag: "<< fixed<< x << endl;
	return 0;
}


