//Create a function is_even which take a number as argument, return TRUE if number is even.Take number from user 
//at run time. 
#include<iostream> 
using namespace std; 
 
int IS_EVEN(int); 
int main()
 { 
 	int a; 
 	cout<<"Enter a number = "<<endl; 
 	cin>>a; 
 	cout<<"Returned value is "<<IS_EVEN(a)<<endl; 
 	system("pause"); 
 	return 0; 
} 
int IS_EVEN(int a) 
{ 
 	bool b1=true;     
	bool b2=false;    
	if(a%2==0) 
 	return b1;    
	else    
	return b2; 
} 
