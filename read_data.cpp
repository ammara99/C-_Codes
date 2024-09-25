#include<iostream>
#include<fstream>
using namespace std;
main()
{
	char ch;
	fstream ob("C:\\Users\\Ammara\\Downloads\\test.txt");
	cout<<"\nReading character from File \n ";
	while(!ob.eof())
	{
			ob.get(ch);
			cout<<ch;
	}
	ob.close();
}
