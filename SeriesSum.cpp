//Write a program to sum of series is 1+1/2+1/3+1/4+.......1/45?
#include<iostream>
using namespace std;
int main()
{
	float num,sum=0;
	cout<<"Series of sum is "<<endl;
	for(num=1;num<=45;num=num+1)
	{
		sum=sum+1/num;
	}
	cout<<"Sum :"<<sum<<endl;
	return 0;
}                                               
