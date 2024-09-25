#include<iostream>
using namespace std;
main()
{
	double sum=0.0;
	cout<<"\n The series 1/3 + 3/5 + 5/7 ... + 97/99"<<endl;
	for (int i=1; i<=97 ; i=i+2)
	{
		sum+=(double)(i)/(i+2);
	}
	cout<<"Sum is :"<<sum;
	return 0; 
}
