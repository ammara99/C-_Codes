#include<iostream>
#include<fstream>
using namespace std;
struct employee
{
	string name="Ali";
	int age=25;
};
main()
{
	employee e;
	ofstream p("C:\\Users\\Ammara\\Downloads\\test1.txt");
	p<<e.name<<"\n";
	p<<e.age;
	p.close();

	return 0;
}
