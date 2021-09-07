#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main()
{
	cout<<"Enter the name in the form <last,first>:\n";
	string lastname;
	getline(cin,lastname,',');
	string firstname;
	getline(cin,firstname);
	
	cout<<"Here is your name:\n\t|"<<firstname<<' '<<lastname<<"|\n";
	return 0;
	
}
