#include<iostream>
#include<fstream>
using namespace std;
main()
{
		int i;
		string city;
		ifstream file("C:\\Users\\Ammara\\Documents\\C++\\city.txt");
		cout<<"\nReading from File \n";
		for(i=0; i<5; i++)
		{
			file>>city;
			cout<<city<<endl;

		}
		
		file.close();
		
	
		return 0;
}
