#include<iostream>
using namespace std;
main()
{
	char ch='A';
	int n;
	for (int i=1; i<=5;i++)
	{
		for (int j=1;j<=i;j++)
		{
			cout<<ch<<" ";
			ch++;
		}
		cout<<endl;
	}
	
	return 0;
}
