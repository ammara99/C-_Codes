#include<iostream>
using namespace std;
void show(int *x, int *y)
{
	int fact=1;
	for(int i=1;i<=*x;i++)
	{
		fact=fact*i;
	}
	cout<<"\n Factorial is :"<<fact;
	cout<<"\n power of y is :"<<*y*(*y);
	
}
main()
{

	int x=5,y=20;
	show(&x,&y);
	
	return 0;
}

