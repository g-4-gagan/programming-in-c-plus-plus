/*
	Name: student class
	Copyright: cs pvt ltd
	Author: Gagan kumar soni and Akshat rastogi
	Date: 29-10-19 19:32
	Description: student class to store the data of the students
*/

#include<iostream>
#include<string>
using namespace std;

class student
{
	int Roll_no;
	string Name;
	string Class;
	int Year;
	int tot_marks;
 public:
 	student(int roll,string name,string cls,int yr,int marks);
 	void input();
 	void print_qus_for();
	
}; 

student::student(int roll,string name,string cls,int yr,int marks)
{
	Roll_no=roll;
	Name=name;
	Class=cls;
	Year=yr;
	tot_marks=marks;
	return;
}

void student::input()
{  
	cin>>Roll_no>>Name>>Class>>Year>>tot_marks;
}

void student::print_qus_for()
{
	cout<<Roll_no<<"\t"<<Name<<"\t"<<tot_marks<<endl;
	return;
}


int main()
{   int n;
    int const N=100;
    cout<<"Enter the number of data to be entered:\n";
    cin>>n;
    student s[N];
    for(int i=0;i<n;i++)
       s[i].input();
	cout<<"Roll_no\tName\ttot_marks"<<endl;
	for(int i=0;i<n;i++)
	   s[i].print_qus_for();
}
