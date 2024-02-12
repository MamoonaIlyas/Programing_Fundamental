//Q:Write a program that get a number from user and find factorial up to its ?
//Recursive function
#include<iostream>
using namespace std;
int factorial(int);
int main()
{
	int number;
	int fact;
	cout<<"Please enter a positive integer "<<endl;
	cin>>number;
	if(number<0)
      cout<<"This is not a positive integer "<<endl;
	  else
	  {
	  	fact=factorial(number);
	  	cout<<"factorial"<<number<<"is :"<<fact<<endl;
		  }	
		  system("pause");
}
int factorial(int number)
{
	int temp;
	if(number<=1)
	return 1;
	else
	temp=number*factorial(number-1);
	return temp;
}
//Non-recursive function
#include<iostream>
using namespace std;
int factorial(int n)
{
	int result=1,i=0;
	if(n<=1)
	return 1;
	for(i=n;i>=2;i--)
	{
		result=result*i;
	}
	return result;
}
int factorial(int);
int main()
{
	int number;
	int fact;
	cout<<"Please enter a positive integer "<<endl;
	cin>>number;
	cout<<"Factorial of number is :"<<
	  factorial(number);
	  	cout<<endl;
		  
		  system("pause");
		  return 0;
}
