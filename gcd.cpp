#include<iostream>
using namespace std;
main()
{
	int n1, n2, gcd=1;
	cout<<"\n Enter a Number : ";
	cin>>n1;
	cout<<"\n Enter a Number : ";
	cin>>n2;
	for (int i=2; i<=n1 && i<=n2 ; i++)
		{
			if(n1%i==0 && n2%i==0)
			{
				gcd=i;
			}
		}
	cout<<"The Greatest Common Divisor for "<<n1<<" and "<<n2<<" is : "<<gcd<<endl;
	
	
	return 0; 
}
