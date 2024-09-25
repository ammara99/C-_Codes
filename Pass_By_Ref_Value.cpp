#include<iostream>
using namespace std;
void by_value(int x)
{
	x=50;
	cout<<"\n Value of x after Change:"<<x;
}
void by_ref(int &y)
{
	y=80;
	cout<<"\n Value of y after Change:"<<y;
}
main()
{

	int x=10,y=20;
	cout<<"\n Value of x Before Change :"<<x;
	by_value(x);
	cout<<"\n Value of x After Change :"<<x;
	cout<<"\n\n\n Value of Y Before Change :"<<y;
	by_ref(y);
	cout<<"\n Value of Y After Change :"<<y;
	
	return 0;
}

