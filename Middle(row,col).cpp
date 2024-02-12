/*Q: Write a function in C++ which accepts a 2D array of integers and its size as arguments and displays the 
elements of middle row and the elements of middle column?*/
#include<iostream>
using namespace std;
void showmid(int matrix[5][5])
{
	 int mid=5/2;
		cout<<"The middle row is :"<<"    "<<endl;
	for(int i=0;i<5;i++){
	cout<<matrix[mid][i]<<"    ";
    }
    cout<<endl;
	cout<<"The middle column is :"<<"    "<<endl;
	for(int i=0;i<5;i++){
	cout<<matrix[i][mid]<<"    ";
    }
    cout<<endl;
}

int main()
{
	int matrix[5][5];
	cout<<"Enter the order matrix :"<<endl;
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++)
	cin>>matrix[i][j];
	}
	cout<<"Matrix :"<<endl;
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{

	      cout<<matrix[i][j]<<"  ";
	    }
	    cout<<endl;
   }
   cout<<endl;
   showmid(matrix);
}

