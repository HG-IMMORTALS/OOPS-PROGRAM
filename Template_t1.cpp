#include<bits/stdc++.h>
using namespace std;
template<class T>
class Calculator
{
    private:
        T x;
        T y;
    public:
        Calculator(T a, T b){
            x = a;
            y = b;
        }
    void display()
    {
        cout<<"Sum: "<<sum()<<endl;
        cout<<"Subtract: "<<subtract()<<endl;
        cout<<"Product: "<<mul()<<endl;
        cout<<"Division: "<<div()<<endl;
    }

    T sum(){return x+y;}
    T subtract(){return x-y;}
    T mul(){return x*y;}
    T div(){return x/y;}
};

int main()
{
    Calculator<int> obj(3,7);
    Calculator<float> obj2(9.3,7.5);
    obj.sum();
    obj.subtract();
    obj.mul();
    obj.div();

    obj.display();

    obj2.sum();
    obj2.subtract();
    obj2.mul();
    obj2.div();

    obj2.display();
    return 0;
}