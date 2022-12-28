#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter\n";
    cin>>num;

    try
    {
        if(num == 0)
            throw 5;
        cout<<25/num;
    }

    catch(int a)
    {
        cout<<"Number cannot be divided by 0\n";
        cout<<"Error Code: 1";
    }
    return 0;
}