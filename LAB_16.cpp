#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    // ofstream myout("ffile1.txt",ios::out);
    // if(!myout){
    //     cout<<"Can't open\n";
    //     return 0;
    // }

    // string s;
    // cout<<"Enter\n";
    // getline(cin, s);

    // myout<<s;
    // myout.close();

    ifstream myin("ffile1.txt",ios::in);
    if(!myin){
        cout<<"Can't open\n";
        return 0;
    }

    string ss="";
    while(getline(myin,ss)){
        cout<<ss;
    }
    myin.close();
    return 0;
}