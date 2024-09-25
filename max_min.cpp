#include<iostream>
using namespace std;
main()
{
	int a,b,c,max,min;
	cout<<"\n Enter a :";
	cin>>a;
	cout<<"\n Enter b :";
	cin>>b;
	cout<<"\n Enter c :";
	cin>>c;
	max=min=a;
	if(b<min) min=b;
	if(c<min) min=c;
	if(b>max) max=b;
	if(c>max) max=c;
	cout<<"\n Maximum Number is :"<<max;
	cout<<"\n Minimum Number is :"<<min;

	return 0;
}
