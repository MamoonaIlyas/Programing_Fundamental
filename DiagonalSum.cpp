//Q:1  Write user defined functions for square matrix to calculate Left diagonal sum ,Right diagonal sum?
#include<iostream>
using namespace std;
int main()
{
	int num[20][20],sum=0,sum1=0,n;
	cout<<"Enter number of column and row :";
	cin>>n;
	cout<<"Enter element of matrix :"<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<"Enter matrix number "<<i<<j;
			cin>>num[i][j];
		}
		cout<<endl;
	}
	cout<<"Matrix :"<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
	      cout<<num[i][j]<<"  ";
	    }
	    cout<<endl;
   }

	       	for(int i=0;i<n;i++)
			   {
		for(int j=0;j<n;j++)
		{
		if(i==j)
	    	{
	        	sum=sum+num[i][j];
	        }
		    if	(i+j==n-1)
		    {
	        	sum1=sum1+num[i][j];
	        }
	    }
	}
	cout<<"Left diagonal sum :" <<sum<<endl;
    cout<<"Right diagonal sum :"<<sum1<<endl;      
			return 0; 
}
   


