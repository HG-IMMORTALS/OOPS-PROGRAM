#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
ofstream myout("file.txt", ios::app);
if(!myout)
{
cout<<"Can't open file "<<endl;
return 0;
}
char text[255];
cout<<"Enter text to write to file"<<endl;
cin.getline(text, sizeof(text));
cout<<"Writing text to file"<<endl;
char *c;
c=text;
myout<<endl;
while(*c != NULL)
{
myout.put(*c);
c++;
}
myout.close();
ifstream myin("file.txt");
cout<<"Reading text from file "<<endl;
myin.read(text, sizeof(text));
cout<<text<<endl;
myin.close();
cout<<endl<<endl<<"Updating the file"<<endl;
cout<<"Secify the position at which you want to updat the character in file"<<endl;
int pos;
cin>>pos;
cout<<"Secify the new character at this position"<<endl;
char ch;
cin>>ch;
myout.open("file.txt",ios::in|ios::out);
myout.seekp(pos, ios::beg);
myout.put(ch);
myout.close();
myin.open("file.txt");
cout<<"Reading text from file "<<endl;
myin.read(text, sizeof(text));
cout<<text<<endl;
myin.close();
}
