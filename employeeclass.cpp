#include<iostream>
using namespace std;

class employee
{
	protected:
		int id;
		
	public:
		employee(int idin);
		~employee();
};

employee::employee(int idin)
{
	id=idin;
	cout<<"base constructor for employee: "<<idin<<endl;
}

employee::~employee()
{
	cout<<"base destructor for employee: "<<id<<endl;
}

class salaryemp:public employee
{
	private:
		int salary;
		
	public:
		salaryemp(int idin,int salaryin);
		~salaryemp();
};

salaryemp::salaryemp(int idin,int salaryin):employee(idin)
{
	salary=salaryin;
	cout<<"derived constructor for salaryemp: "<<id<<"salary: "<<salary<<endl;
}

salaryemp::~salaryemp()
{
	cout<<"derived destructor for salryemp: "<<id<<endl;
}



