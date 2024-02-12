//Write a program to find the geometric sequence:{3,6,12,24,48,96,……}, by using recursive function ? 
#include<iostream>
using namespace std;
int gem_seq(int num,int a,int r)
{
	if(num==1)
	{
		return a;
	}
	else
	return r*gem_seq(num-1,a,r);
}
int main()
{
	int a=3,r=2,num;
	cout<<"Please enter the term of geometirc sequence : ";
	cin>>num;
	cout<<"The "<<num<<" term in the geometric sequence : "<<gem_seq(num,a,r)<<endl;
	return 0;
}
