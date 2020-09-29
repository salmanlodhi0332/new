#include<iostream>
#include<conio.h>
#include<string>

using namespace std;
void main()
{
string name1, name2;
int n;
cout<<"Enter your First Name: "<<endl;
cin>>name1;
cout<<"Enter your Last Name : "<<endl;
cin>>name2;
cout<<" Enter total number of characters in your first name: "<<endl;
cin>>n;
name1.replace(0,n,name2);
cout<<name1<<endl;
	getch();
}
