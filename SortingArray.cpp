//Write a program for selection sort to arrange an array values in assending and desending order?
#include<iostream>
using namespace std;
void swap(int*a,int*b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
void Printarray(int arr[],int size)
{
	for(int i=0;i<size;i++){
	cout<<arr[i]<<"  ";
    }
	cout<<endl;
}
void ascending(int arr[],int size)
{
	int min_indx;
	for(int step=0;step<size-1;step++)
	{
		min_indx=step;
		for(int i=step+1;i<size;i++)
		{
		if(arr[i]<arr[min_indx])
		min_indx=i;	
		}       
    swap(&arr[min_indx],&arr[step]);       
	}
}
void descending(int arr[],int size)
{
	int max_indx;
	for(int step=0;step<size+1;step++)
	{
		max_indx=step;
		for(int i=step+1;i<size;i++)
		{
		if(arr[i]>arr[max_indx])
		max_indx=i;	
		}
	swap(&arr[max_indx],&arr[step]);	  
	}
}
int main()
{
	int data[]={20,12,10,15,2};
	int size=sizeof(data)/sizeof(data[0]);
	ascending(data,size);
	cout<<"Sorted array in ascending order : "<<endl;
	Printarray(data,size);
	descending(data,size);
	cout<<"Sorted array in descending order : "<<endl;
	Printarray(data,size);
	return 0;
}