#include<iostream>
#include<cstdlib>
using namespace std;

double divide(double dvnd,double dvsr)
{   
    float a=0;
	if(dvsr<0)
	throw dvsr;
	if(dvsr==0)
	throw a;
	return dvnd/dvsr;
}

int main()
{
	cout<<"enter the dividend: ";
	double dividend;
	cin>>dividend;
	cout<<"enter the divisor: ";
	double divisor;
	cin>>divisor;
	
	try{
		double quotient=divide(dividend,divisor);
		cout<<"quotient is: "<<quotient<<endl;
	}
	
	catch(float& zeroerror)
	{
		cout<<"**eroor 100: divisor 0\n";
		exit(100);
	}
	
	catch(double &negerror)
	{
		cout<<"**error 101: negative divisor\n";
		exit(101);
	}
	cout<<"end of exception handling test ";
	return 0;
	
}
