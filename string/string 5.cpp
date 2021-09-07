#include<iostream>
#include<fstream>
#include<cstdlib>
#include<string>
using namespace std;

int main()
{
	ofstream fsOut;
	
	cout<<"begin file copy. Enter your text. \n"<<"<EOF> to stop.\n";
	
	fsOut.open("file-string5.txt");
	if(!fsOut)
	  {
	  	cerr<<"\aCould not open output file.\n\a";
	  	exit(100);
	  }
	  
	string str;
	while(getline(cin,str))
	    fsOut<<str<<endl;
	fsOut<<str<<endl;
	fsOut.close();
	
	cout<<"\nEnd file copy\n";
	return 0;
	
}
