/*
	Name: program on matrices
	Copyright: cs pvt ltd
	Author: Gagan kumar soni and Akshat rastogi
	Date: 29-10-19 17:58
	Description: menu driven program on matrices
*/

#include<iostream>
using namespace std;

void input_mat(int ar[][100],int row,int column)                                                     //function for taking input
{  cout<<"Enter the data of the matrix"<<endl;
   for(int i=0;i<row;i++)
	  {
	   	for(int j=0;j<column;j++)
	   	   cin>>ar[i][j];
	  }
}

void print_mat(int ar[][100],int row,int column)                                                    //function for printing matrix
{  cout<<"The matrix is:\n";
   for(int i=0;i<row;i++)
      {
       for(int j=0;j<column;j++)
          cout<<ar[i][j]<<"\t";
       cout<<endl;
	  } 
	   
	
}

void add_mat(int m1[][100],int r1,int c1,int m2[][100],int r2,int c2,int res[][100])                //function for addition of two matrices
{
	for(int i=0;i<r1;i++)
	  {
	  	for(int j=0;j<c1;j++)
	  	    res[i][j]=(m1[i][j]+m2[i][j]);
	  }
} 

void sub_mat(int m1[][100],int r1,int c1,int m2[][100],int r2,int c2,int res[][100])                //function for substraction of two matrices
{
	for(int i=0;i<r1;i++)
	  {
	  	for(int j=0;j<c1;j++)
	  	    res[i][j]=(m1[i][j]-m2[i][j]);
	  }
} 

void multiply_mat(int m1[][100],int r1,int c1,int m2[][100],int r2,int c2,int res[][100])          //function for multiplying two matrices 
{
	for(int i=0;i<r1;i++)
	  {
	  	for(int j=0;j<c2;j++)
	  	    { int sum=0;
	  	      for(int k=0;k<c1;k++)
	  	         sum=sum+(m1[i][k]*m2[k][j]);
	  	      res[i][j]=sum;
			}
	  }
	
}

void transpose_mat(int m[][100],int r,int c)                                                       //function to transpose the matrix
{ 
	int temp[r][c];
	for(int i=0;i<r;i++)
	  {
	  	for(int j=0;j<c;j++)
            temp[j][i]=m[i][j];
	  }
	for(int i=0;i<r;i++)
	  {
	  	for(int j=0;j<c;j++)
            m[i][j]=temp[i][j];
	  }
}

int main()                                                                                         //main function
{   int const N=100;
    int mat1[N][N],mat2[N][N],res[N][N];
    int row1,col1,row2,col2,choice;
    cout<<"Enter the number of rows of 1st matrix\n";
    cin>>row1;
    cout<<"Enter the number of columns of 1nd matrix\n";
    cin>>col1;
    input_mat(mat1,row1,col1);
    print_mat(mat1,row1,col1);
    cout<<"Enter the number of rows of 2st matrix\n";
    cin>>row2;
    cout<<"Enter the number of columns of 2nd matrix\n";
    cin>>col2;
    input_mat(mat2,row2,col2);
    print_mat(mat2,row2,col2);
    cout<<"choose the task to perform:\n1.sum\n2.difference\n3.product\n4.transpose\n";
    cin>>choice;
    switch(choice)
      {
      	case 1: if(row1==row2&&col1==col2)
      	         {
				   add_mat(mat1,row1,col1,mat2,row2,col2,res);
      	           print_mat(res,row1,col1);
      	         }
      	        else
      	         cout<<"\nThe number of rows or number of columns are not equal therefore addition can't be done";
      	        break;
      	case 2: if(row1==row2&&col1==col2)
      	         {
				   sub_mat(mat1,row1,col1,mat2,row2,col2,res);
      	           print_mat(res,row1,col1);
      	         }
      	        else
      	         cout<<"\nThe number of rows or number of columns are not equal therefore substraction can't be done";
      		    break;
      	case 3: if(col1==row2)
      	         {
				   multiply_mat(mat1,row1,col1,mat2,row2,col2,res);
      	           print_mat(res,row1,col2);
      	         }
      	        else
      	         cout<<"\nThe number of columns of first matrix is not equal to number of rows of second matrix therefore multiplication can't be done";
      		    break;
      	case 4: transpose_mat(mat1,row1,col1);
		        print_mat(mat1,row1,col1); 
		        transpose_mat(mat2,row2,col2);
		        print_mat(mat2,row2,col2);
      	        break;
      	default: cout<<"you have chose a wrong choice";
      }
      
      
}

