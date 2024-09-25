#include<iostream>
using namespace std;
main()
{
	int n;
	int sum=0;
	bool f=false;
	
	while(!f)
	{
		cout<<"\n Enter a number :";
		cin>>n;
		if(n>0);
		sum=sum+n;
		else
		f=true;
	}
	
	cout<<"\n The sum is : "<<sum;
	
	
	return 0;
}
