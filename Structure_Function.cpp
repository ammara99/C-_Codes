#include<iostream>
using namespace std;

struct student{
	string name;
	int marks;
};
void show(student s);
main()
{
	student s;
	cout<<"\n Enter your Name :";
	cin>>s.name;
	cout<<"\n Enter your makrs :";
	cin>>s.marks;
	show(s);
	
	return 0;
}
void show(student s)
{
	cout<<"\n Name :"<<s.name;
	cout<<"\n makrs :"<<s.marks;
}

