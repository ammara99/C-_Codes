#include<iostream>
using namespace std;

void palindorme()
{
	string s;
	cout<<"\n Enter a String :";
	cin>>s;
	cout<<"\n";
	int low=0, high=s.length()-1;
	bool pal=true;
	while(low<high)
	{
		if(s[low]!=s[high])
		{
		 	pal=false;
			break; }	
		low++;
		high--;
	} if (pal)
		cout<<s<<" Is Palindrome  ";
	else
		cout<<s<<" Is not Palindrome ";
}
main()
{
	palindorme();
	return 0; 
}
