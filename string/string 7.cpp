#include<iostream>
#include<fstream>
#include<cstdlib>
#include<string>
using namespace std;

int main()
{
	ifstream fstextin;
	
	fstextin.open("file-string5.txt");
	if(!fstextin)
	   {
	   	cout<<"\aCould not open input file. \n\a";
	   	exit(100);
	   }
	
	string str;
	while(getline(fstextin,str))
	    cout<<str<<endl<<endl;
	fstextin.close();
	return 0;
	
}
