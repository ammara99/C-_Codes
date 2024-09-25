#include<iostream>
using namespace std;
main()
{
	char ch;
 	int x,y,count=1;
	cout<<"\n Enter choice of your character :";
	cin>>ch;	
	for (x=0; x<5 ; ++x)
	{
		cout<<endl;
	for (y=0; y<5*2-1; ++y)	
	{
		if(y==x || y==((5*2-1)-count))
			cout<<ch;
		else
			cout<<" ";	 
	}	
			++count;	
	}	
	return 0; 
}
