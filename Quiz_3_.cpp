#include <iostream>
#include <String>
using namespace std;
struct record{
	float gpa;
	int marks[5];
};
struct student{
	int age;
	string name;
	string address;
	record r;
};
int main(){
	student s2[3];
//	float sum1=0.0,sum2=0.0,sum3=0.0;
	float  avg1, avg2, avg3;
	for(int i = 0; i < 3;i++){
		cout<<"\nEnter info of student: ";
		cout<<"\nEnter name of student: ";
		cin>>s2[i].name;
		cout<<"\nEnter age of student: ";
		cin>>s2[i].age;
		cout<<"\nEnter address of student: ";
		cin>>s2[i].address;
		for(int j = 0; j<5; j++)
		{
			cout<<"\nEnter marks of five subjects: ";
			cin>>s2[i].r.marks[j];	}}
	avg1 = (s2[0].r.marks[0]+s2[0].r.marks[1]+s2[0].r.marks[2]+s2[0].r.marks[3]+s2[0].r.marks[4]) / 5;
	avg2 = (s2[1].r.marks[0]+s2[1].r.marks[1]+s2[1].r.marks[2]+s2[1].r.marks[3]+s2[1].r.marks[4]) / 5;
	avg3 = (s2[2].r.marks[0]+s2[2].r.marks[1]+s2[2].r.marks[2]+s2[2].r.marks[3]+s2[2].r.marks[4]) / 5;
	if(avg1>avg2 && avg1>avg3){
		cout<<"Average of first student is greatest";
	}
	else if(avg2>avg1 && avg2>avg3){
		cout<<"Average of second student is greatest";
	}
	else{		cout<<"Average of third student is greatest";	}}
