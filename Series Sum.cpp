#include<iostream>
using namespace std;
main()
{
	int n;
	double sum=0.0;
	cout<<"\n Enter a number :";
	cin>>n;
	cout<<"\n The series 1^1 + 2^2 + ... + "<<n<<endl;
	for (int i=1; i<=n ; i++)
	{
		sum=sum+(i*i); 
	}
	cout<<"\n The sum of the series is : "<<sum;
	return 0; 
}
