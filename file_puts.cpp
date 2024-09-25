#include<iostream>
#include<fstream>
using namespace std;
main()
{
	int i=0;
	char ch;
	ofstream p("C:\\Users\\Ammara\\Downloads\\test.txt");
	for(i=0;i<5;i++)
	{
		cout<<"\n Enter a Character:";
		cin>>ch;
		p.put(ch);
		p<<"\n";
	}
	p.close();

	return 0;
}
