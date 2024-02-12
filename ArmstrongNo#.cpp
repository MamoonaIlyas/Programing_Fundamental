//Write a program to print out all Armstrong numbers between 99 and 999. If sum of cubes of each digit of the number 
//is equal to the number itself, then the number is called an Armstrong number?
#include<iostream>
using namespace std;
int main()
{
   cout<<"Print Armstrong number between 99 & 999 "<<endl;
 for(int i=99;i<=999;i++){
 	int temp = i;
 	int sum = 0;
 	while(temp>0)
 	{
 		int digit=temp % 10;
 		sum+=digit*digit*digit;
 		temp/=10;
	 }
	 if(sum==i){
	 	cout<<i<<" ";
	 }
 }
	return 0;
}



