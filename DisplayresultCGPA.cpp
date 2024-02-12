/*Question:Write a program that  display result?*/
#include<iostream>
using namespace std;
int main()
{
	double GPA;
	cout<<"Please enter GPA"<<endl;
	cin>>GPA;
	if((GPA>3.7)&&(GPA<=4.0))
	//This statement is not exceute than the other statement is check
	{
	cout<<"GPA is A\tCheetah Bacha"<<endl;
    }
	else if((GPA>3.3)&&(GPA<=3.7))
	{
	cout<<"GPA is A-\tAcha Bacha"<<endl;
	}
	else if((GPA>3.0)&&(GPA<=3.3))
	{
	cout<<"GPA is B+\tTheek Bacha"<<endl;
	} 
	else if((GPA>2.7)&&(GPA<=3.0))
	{
	cout<<"GPA is B\tGuzara Bacha"<<endl;
	} 
	else if((GPA>2.3)&&(GPA<=2.7))
	{
	cout<<"GPA is B-\tMatha Bacha"<<endl;
	}  
	else if((GPA>2.0)&&(GPA<=2.3))
	{
	cout<<"GPA is C+\tFarigh Bacha"<<endl;
	}
	else if((GPA>4.0)||(GPA<0.0))
	{
	cout<<"GPA is out of range"<<endl;
	}
	else
	//The upper statement will not exceute than this statement will run
	{
	cout<<"Fail\tKoi Haal Nahin"<<endl;
    }
	return 0;
}
