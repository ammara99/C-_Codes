#include<iostream>
using namespace std;
main()
{
	int n;
	int sum=0;
	
	while(1)
	{
		cout<<"\n Enter a number :";
		cin>>n;
		if(n%2==1)
		continue;
		sum=sum+n;
	}
	
	cout<<"\n The sum is : "<<sum;
	
	
	return 0;
}
