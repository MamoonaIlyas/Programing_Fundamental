//Q: write a function is prime from using bool datatype?
#include<iostream>
using namespace std;
bool check_prime(int number)//is_prime is function 
//Function declaration
{
	int num=2;
	bool is_prime;
    is_prime=true;
	if(number == 0 || number == 1)
	{
		is_prime=false;
	}
	for(num;num<=number/2;++num)
	{
	if(number%num==0)//number is divide by num=2 are equal to zero
	{
		is_prime=false;
		break;
	}
    }  

	return is_prime;
}
//Function call
int main()
{
	int number,is_prime;
    cout<<"Enter a positive  integer  :";
    cin>>number;//Take value from user
    is_prime=check_prime(number);
    if (check_prime(number))
     cout<<number<<" is a prime number :"<<is_prime<<endl;
     else
     cout<<number<<" is not a prime number :"<<is_prime<<endl;
    
}

