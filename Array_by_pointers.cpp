#include<iostream>
using namespace std;
main()
{

	int x[5]={45,55,78,95,66};
	int *p=x;
	for(int i=0;i<5;i++)
	{
		cout<<(*p+i)*2<<endl;
	}
	
	return 0;
}

