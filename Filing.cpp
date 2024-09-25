#include<iostream>
#include<fstream>
using namespace std;
main()
{
		string city;
		ofstream file("C:\\Users\\Ammara\\Documents\\C++\\city.txt");
			for(int i=0; i<5; i++)
		{
			cout<<"\n Enter City :";
			cin>>city;
			file<<city<<"\n";

		}
		file.close();
		
	
		return 0;
}
