#include<iostream>
using namespace std;
main()
{
	int n, temp,i=1, res, j;
	char hex[50];
	cout<<"Enter a Decimal :";
	cin>>n;
	temp=n;
	while(temp!=0)
	{
		res=temp%16;
		if(res<10)
		
			hex[i++]=res+48;
		else
		
			hex[i++]=res+55;
		temp=temp/16;	
	}
 cout << "\nHexadecimal equivalent of " << n << " is : ";
    for (j = i; j > 0; j--)
        cout << hex[j];
	return 0; 
}
