#include<iostream>
using namespace std;
main()
{
	int s,e,sq;
	cout<<"\n Enter starting number :";
	cin>>s;
	cout<<"\n Enter Ending number :";
	cin>>e;
	for(int i=s;i<=e;i++)
	{
		if(i%2==0)
		{
			cout<<endl<<i<<"*"<<i<<"="<<i*i<<endl;
		}
	}
	
	
	return 0;
}
