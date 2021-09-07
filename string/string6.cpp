#include<iostream>
#include<fstream>
#include<cstdlib>
#include<string>
using namespace std;

int main()
{
	ifstream fsin;
	ofstream fsout;
	
	cout<<"Begin file copy and shift.\n";
	
	fsin.open("file-string5.txt");
	if(!fsin)
	   {
	   	cerr<<"\aCould not open input file.\n\a";
	   	exit(100);
	   }
	
	fsout.open("file-string6.txt");
	if(!fsout)
	   {
	   	cerr<<"\aCould not open output file.\n\a";
	   	exit(101);
	   }
	   
	string str;
	int linecount=0;
	while (getline(fsin,str))
	    {
	     fsout<<" "<<str<<endl;
		 linecount++;  	
	    }
	fsin.close();
	fsout.close();
	cout<<"End of file shift. "<<linecount<<"lines written\n";
	return 0;
}
