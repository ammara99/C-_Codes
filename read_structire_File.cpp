#include<iostream>
#include<fstream>
using namespace std;
struct employee
{
	string name;
	int age;
};
main()
{
	employee e;
	string name;
	int age;
	ifstream p("C:\\Users\\Ammara\\Downloads\\test1.txt");
	p>>e.name>>e.age;
	cout<<"\nName : "<<e.name<<" \n Age :"<<e.age;
	p.close();

	return 0;
}
