#include<iostream>
using namespace std;
main()
{
	int n,first=0,second=1,third;
	cout<<"\n Enter number :";
	cin>>n;
	cout<<first<<"\t"<<second;
	for(int i=2;i<n;i++)
	{
		third=first+second;
		cout<<"\t"<<third;
		first=second;
		second=third;		
	}
	
	
	return 0;
}
