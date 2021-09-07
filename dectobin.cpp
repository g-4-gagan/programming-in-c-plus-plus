#include<iostream>
using namespace std;
int conversion(int ar[],int n)
{   int i=0;
  for(;n>0;i++)
    { ar[i]=n%2;
      n=n/2;
    }
    return i;
}

void printrev(int ar[],int size)
{
	for(int i=size-1;i>=0;i--)
	  cout<<ar[i];
	  return;
}

int main()
{ const int N=10;
  int ar[10];
  int n,size;
  cout<<"enter the number to convert in binary form\n";
  cin>>n;
  size=conversion(ar,n);
  printrev(ar,size);
  
}
