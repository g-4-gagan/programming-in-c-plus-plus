#include<iostream>
using namespace std;
int prime(int n)
{   int f=0,i;
	for(i=1;i<=n;i++)
	{ if(n%i==0)
	    f++;
	}
	if(f==2)
	return 1;
	else 
	return 0;
}

int main()
{
	int n,a,b;
	cout<<"enter a integer to check the prime:\n";
	cin>>n;
	a=prime(n);
	if(a==1)
	 cout<<"the entered number is prime number";
	 else
	 cout<<"the entered number is not prime number";
	cout<<"\nenter the number of prime number to be displayed";
	cin>>b;
}
