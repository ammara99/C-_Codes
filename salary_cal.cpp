#include<iostream>
using namespace std;
main()
{
	int salary;
	float net;
	cout<<"\n Enter Salary :";
	cin>>salary;
	if (salary>=20000) 
			net= salary - (salary*7/100);
	if (salary<20000 && salary>10000) 
			net= salary - (salary*5/100);
	if (salary<10000) 
			net= salary +1000;
	cout<<"\n Total salary is :"<<net;
	
	return 0;
}
