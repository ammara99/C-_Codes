#include<iostream>
#include<fstream>
using namespace std;
main()
{
	char ch;
	int v=0, c=0;
	fstream ob("C:\\Users\\Ammara\\Downloads\\test.txt");
	cout<<"\nReading character from File \n ";
	while(!ob.eof())
	{
			ob.get(ch);
			cout<<ch;
			if(ch=='A'||ch=='a'||ch=='I'||ch=='i'||ch=='O'
			||ch=='o'||ch=='E'|| ch=='e'|| ch=='U'||ch=='u')
			{
				v++;
			}
			else
			{
				c++;
			}
	}
	cout<<"Vowel Count \n "<<v;
	cout<<"\n Other Character Count \n "<<c;
	
	ob.close();
}
