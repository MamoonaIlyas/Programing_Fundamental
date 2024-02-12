/*Q:2 Write a user defined function named Upper-half() which takes a two dimensional array A,with size N rows 
and N columns as argument and prints the upper half of the array?*/
#include<iostream>
using namespace std;
void upper_half(int arr[5][5])
{
	for(int i=4;i>=0;i--){
    for(int j=0;j<=i;j++){
    	cout<<" "<<" ";
    	cout<<arr[i][j]<<"  ";
	}
	cout<<endl;
  }
}
void upper_half();
int main()
{
   int arr[5][5];
   for(int i=0;i<5;i++)	{
    for(int j=0;j<5;j++){
	cout<<"Enter the "<<j+1<<"Element of row : "<<i+1<<"  ";
	cin>>arr[i][j];
    }
	cout<<endl;
      }
	cout<<endl<<endl<<endl;
	upper_half(arr);
}

