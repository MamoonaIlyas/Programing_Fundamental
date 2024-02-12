//Write a program to find minimum index in array?
#include<iostream>
using namespace std;
int Smallest(int arr[],int size)
{
	int min=arr[0];
	int minindex=0;
	for(int i=0;i<size;i++){
		if(arr[i]<min){
			min=arr[i];
			minindex=i;
		}
	}
	return minindex;
}
int main()
{
	int arr[]={5,6,8,2,4,8,9};
	int size = (sizeof(arr)/sizeof arr[0]);
	int index=Smallest(arr,size);
	cout<<"The samllest element is "<<arr[index]<<" at index "<<index<<endl;
}

