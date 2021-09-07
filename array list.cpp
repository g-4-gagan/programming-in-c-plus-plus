#include<iostream>
using namespace std;

void inp_lst(int lst[],int size)
{ for(int i=0;i<size;i++)
     cin>>lst[i];
     return;
}

void even_lst(int lst[],int size)
{ for(int i=0;i<size;i++)
     if(lst[i]%2==0)
       cout<<lst[i]<<"\n";
}

void odd_lst(int lst[],int size)
{ for(int i=0;i<size;i++)
     if(lst[i]%2!=0)
       cout<<lst[i]<<"\n";
}

void sum_avg(int lst[],int size)
{ int sum=0;
  double avg;
  for(int i=0;i<size;i++)
     sum=sum+lst[i];
     avg=double(sum)/size;
     cout<<"sum of the elements is: "<<sum;
     cout<<"\naverage of the elements is: "<<avg;
}

void max_min(int lst[],int size)
{ int min,max;
  min=lst[0];
  max=lst[0];
  for(int i=0;i<size;i++)
     { if(lst[i]<min)
	     min=lst[i];
	   if(lst[i]>max)
	     max=lst[i];
     }
   cout<<"the maximum element is: "<<max;
   cout<<"\nthe minimum element is: "<<min;
} 

void dst_lst(int lst[],int size)
{ cout<<"the distinct elements are: \n"<<lst[0]<<"\n";
  for(int i=1;i<size;i++)
     { for(int j=i;lst[i]!=lst[j]&&j>0;j--)
          { if(j=0)
              cout<<lst[i]<<"\n";
		  }
     }    
}

void rev_lst(int lst[];int size)
{
	
	
	
}

int main()
{   const int A=100;
    int arr[A];
	int n,a;
	cout<<"enter the number of dta values enter\n";
	cin>>n;
	inp_lst(arr,n);
	cout<<"please choose the action to be performed \n1.print even valued numbers \n2.print odd valued numbers \n3.print sum and average of the elements\n";
	cout<<"4.print maximum and minimum element\n5.print distinct elements\n6.reverse the elements entered";
	cin>>a;
	switch(a)
	{
    	case 1: even_lst(arr,n);
	            break;
	    case 2: odd_lst(arr,n);
	            break;
	    case 3: sum_avg(arr,n);
		        break;
		case 4: max_min(arr,n);
		        break;		        
		case 5: dst_lst(arr,n);
		        break;       
		case 6: rev_lst(arr,n);
		        break;		 
        default: cout<<"you have entered a wrong option";
    }
}
