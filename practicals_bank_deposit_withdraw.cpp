#include <iostream>
using namespace std;

class Bank
{
    private:
        string name;
        int savings;
    public:
        void input();
        void display();
        void deposit(int amount);
        void withdraw(int amount);
};

void Bank::input()
{
    cout<<"Enter the amount\n";
    cin>>savings;

    cin.ignore();
    cout<<"Enter the name\n";
    getline(cin,name);
}

void Bank::display()
{
    cout<<"Name: "<<name<<endl;
    cout<<"Savings: "<<savings<<endl;
}

void Bank::deposit(int amount)
{
    savings += amount;
}

void Bank::withdraw(int amount){
    savings -= amount;
}

int main()
{
    Bank obj;
    obj.input();
    obj.display();

    obj.deposit(500);
    obj.display();

    obj.withdraw(200);
    obj.display();
    return 0;
}