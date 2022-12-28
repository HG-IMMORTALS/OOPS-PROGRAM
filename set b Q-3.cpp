#include <iostream>
using namespace std;

class Distance {
private:
    int m,cm;

public:
    void readDistance(void)
    {
        cout<<"Enter m: ";
        cin>>m;
        cout<<"Enter cm: ";
        cin>>cm;
    }
    void dispDistance(void)
    {
        cout <<"m:"<<m<<"\t"<<"cm:"<<cm<<endl;
    }
    Distance operator+(Distance& dist1)
    {
        Distance tempD;
        tempD.cm=cm+dist1.cm;
        tempD.m=m+dist1.m+(tempD.cm/100);
        tempD.cm=tempD.cm%100;
        return tempD;
    }
};

int main()
{
    Distance D1,D2,D3;

    cout << "Enter first  distance:" << endl;
    D1.readDistance();
    cout << endl;

    cout << "Enter second distance:" << endl;
    D2.readDistance();
    cout << endl;
    
    D3 = D1 + D2;

    cout << "Total Distance:" << endl;
    D3.dispDistance();

    cout << endl;

    return 0;
}

