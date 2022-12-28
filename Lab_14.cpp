#include<bits/stdc++.h>
using namespace std;

class Base
{
    protected:
        int i,j;
    public:
        virtual void add(){
            cout<<"Sum is "<<i+j<<endl;
        }
        void set(int a, int b){
            i=a;
            j=b;
        }
};

class Derived1: public Base
{
    protected:
        int k;
    public:
        void add(){
            cout<<"Sum is "<<i+j+k<<endl;
                
        }
        void set(int a, int b, int c){
            i=a;
            j=b;
            k=c;
        }
};

class Derived2: public Derived1
{
    protected:
        int l;
    public:
        void add(){
            cout<<"Sum is "<<i+j+k+l<<endl;
        }
        void set(int a, int b, int c,int d){
            i=a;
            j=b;
            k=c;
            l=d;
        }
};
int main()
{
    Base obj;
    Base &base_ref = obj;
    obj.set(2,3);
    base_ref.add();

    Derived1 obj2;
    Base &d1_ref = obj2;
    obj2.set(2,3,4);
    d1_ref.add();

    Derived2 obj3;
    Base &d2_ref = obj3;
    obj3.set(2,3,4,5);
    d2_ref.add();
    return 0;
}