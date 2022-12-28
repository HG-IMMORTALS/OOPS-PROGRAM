#include<iostream>
#include<list>
#include<algorithm>
#include<iterator>
using namespace std;
int main()
{
list<int> l;
cout<<"How many elements do you want in the list"<<endl;
int n;
cin>>n;
cout<<"Enter the elements"<<endl;
int i,x;
for(i=0;i<n;i++)
{
cin>>x;
l.push_back(x);
}
cout<<"Printing the list"<<endl;
list<int>::iterator itr;
itr=l.begin();
while(itr!=l.end())
{
cout<<*itr<<"-> ";
itr++;
}
cout<<endl<<"Sorting the list"<<endl;
l.sort();
cout<<"The sorted list is"<<endl;
itr=l.begin();
while(itr!=l.end())
{
cout<<*itr<<"-> ";
itr++;
}
}
