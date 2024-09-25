#include<iostream>
using namespace std;

main()
{
	int n;
	cout<<"Enter Value of n :";
	cin>>n;
	for(int i=0;i<=10;i++)
	{
		if(i==n)
		continue;
		cout<<i<<endl;
	}
	
	return 0;
}
