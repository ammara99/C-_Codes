#include<iostream>
using namespace std;

struct country{
	string name;
	float pop;
};
void show(country s, country s1);
main()
{
	country s,s1;
	cout<<"\n Enter Country Name :";
	cin>>s.name;
	cout<<"\n Enter Population in millions :";
	cin>>s.pop;
	cout<<"\n Enter Country Name :";
	cin>>s1.name;
	cout<<"\n Enter Population in millions :";
	cin>>s1.pop;
	show(s,s1);
	
	return 0;
}
void show(country s, country s1)
{
	if(s.pop>s1.pop)
	{
		cout<<"\n Country with Greatest Populatio:"<<s.name;
	}
	else
	{
		cout<<"\n Country with Greatest Populatio:"<<s1.name;
	}
}

