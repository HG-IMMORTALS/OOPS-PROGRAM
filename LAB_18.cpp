#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<int> ll;
    int n;
    cout<<"Enter number of elements\n";
    cin>>n;

    cout<<"Enter the numbr of elements\n";
    for(int i=0; i<n; i++)
    {
        int num;
        cin>>num;
        ll.push_back(num);
    }

    cout<<"Printing\n";
    list<int>::iterator it;
    it = ll.begin();
    while(it!=ll.end())
    {
        cout<<(*it)<<" ";
        it++;
    }
    cout<<"\nSorted\n";
    ll.sort();
    for(auto it: ll)
        cout<<it<<" ";
    return 0;
}