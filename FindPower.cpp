//Take value from user and find power ?
#include<iostream>
using namespace std;
int power(int base,int exp)//power is function
//Function declaration
{
	int result=1;
	while (exp !=0)
	{
    result*=base;//formula result=result*base
    --exp;
    }
	return result;
}
//Function call
int main()
{
	int base,exp,result;
	cout<<"Enter a base :";
	cin>>base;
	cout<<"Enter a  exponential :";
	cin>>exp;
	//exponential and base take value from user
	result=power(base,exp);
	cout<<"The power of :"<<result<<endl;
}
