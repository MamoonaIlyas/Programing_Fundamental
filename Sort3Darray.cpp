//Write a program to sorting the value of an array in 3D?
#include<iostream>
using namespace std;
int main()
{
	int array[3][2][2];
	cout<<"Please enter value from 3d array ";
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<2;j++)
		{
			for(int k=0;k<2;k++)
			{
				cin>>array[i][j][k];
			}
		}
	}
	cout<<"Below in the value you have stored in the array "<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<2;j++)
		{
			for(int k=0;k<2;k++)
			{
				cout<<"["<<i<<"]["<<j<<"]["<<k<<"] = "<<array[i][j][k]<<endl;
	     }
      }
   }
   return 0;
}
