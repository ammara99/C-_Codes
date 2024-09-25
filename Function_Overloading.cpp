#include<iostream>
using namespace std;
void show(int x)
{
		cout<<"\n Value of X is :"<<x;
}
void show(int x, int y)
{
	cout<<"\n Value of x and y is :"<<x<<"\t"<<y;
}
main()
{

	int x=10,y=20;
	show(x);
	show(x,y);
	
	return 0;
}

