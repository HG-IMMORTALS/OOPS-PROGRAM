#include<iostream>
using namespace std;

class A
{
    protected:
        int i,j;
    public:
        void add(){
            cout<<"A -> Sum of variables is "<<i+j<<endl;
        }
};

class B: virtual public A
{
    public:
    void mul(){
        cout<<"B -> Product of variables is "<<i*j<<endl;
    }
};

class C: virtual public A
{
    protected:
    
    public:
        void div(){
            cout<<"C->Division "<<i/j<<endl;
        }
};

class D: public B, public C
{
    public:
    void set(int x, int y){
        i = x;
        j = y;
    }
    void get(){
        cout<<"The values of two variables: "<<i<<" "<<j<<endl;
    }   
};
int main()
{
    D obj;
    obj.set(25,7);
    obj.get();
    obj.add();
    obj.mul();
    obj.div();
    return 0;
}