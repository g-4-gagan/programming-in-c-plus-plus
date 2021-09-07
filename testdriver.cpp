#include<iostream>
#include<cstdlib>
#include "errordec.cpp"
#include "math.cpp"
using namespace std;

int main()
{
	cout<<"begin error class demonstration\n";
	cout<<"enter the first data: ";
	double data1;
	cin>>data1;
	cout<<"enter the second data: ";
	double data2;
	cin>>data2;
	cout<<"enter the operator: ";
	char opr;
	cin>>opr;
	
	try
	{ 
	  double result =math(opr,data1,data2);
	  cout<<"result: "<<result<<endl;
	}
	catch(Error& error)
	{
		error.printmessage();
		exit(100);
	}
	cout<<"normal end of demonstration\n";
	return 0;
	
}
