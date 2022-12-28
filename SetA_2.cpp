#include<bits/stdc++.h>
using namespace std;

class Counter
{
    public:
    static int count;

    Counter(){
        count++;
    }

    static int get_count(){
        return count;
    }
};
int Counter::count=0;
int main()
{
    Counter obj;
    cout<<Counter::get_count()<<endl;
    Counter obj2;
    cout<<Counter::get_count()<<endl;
    Counter obj3;
    cout<<Counter::get_count()<<endl;
    Counter obj4;
    cout<<Counter::get_count()<<endl;
    return 0;
}