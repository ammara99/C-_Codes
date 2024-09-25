#include<iostream>
using namespace std;
main()
{
	int bill,unit;
	cout<<"\n Enter consumed units :";
	cin>>unit;
	if (unit>=500) 
			bill=unit*7;
	else if (unit>=300) 
			bill=unit*5;
	else
			bill=unit*2;
			bill=bill+150;
	if(bill>2000)
	bill=bill +( bill*5.0/100);
	
	cout<<"\n Total Bills is :"<<bill;
	
	return 0;
}
