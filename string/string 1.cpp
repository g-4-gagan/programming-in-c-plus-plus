#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main()
{ 
  string s1;
  string s2 ("hello world");
  string s3 (s2);
  string s4 (5,'A');
  string s5 (s2,6);
  string s6 ("hello", 2);
  string s7 ("hello",3,25);
  
  cout<<"value of s1: "<<s1<<endl;
  cout<<"value of s2: "<<s2<<endl;
  cout<<"value of s3: "<<s3<<endl;
  cout<<"value of s4: "<<s4<<endl;
  cout<<"value of s5: "<<s5<<endl;
  cout<<"value of s6: "<<s6<<endl;
  cout<<"value of s7: "<<s7<<endl;
  return 0;
}
