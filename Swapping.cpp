//Q:write a program to read two integer from user and then swap them?
#include<iostream>
using namespace std;
int  main()
{  
     int temp,num1,num2;
         cout<<"Enter first number"<<endl;
             cin>>num1;
         cout<<"Enter second number"<<endl;
             cin>>num2;
      cout<<"Number before swapping"<<endl;
             //actual value of num1 & num2
         cout<<"num1= "<<num1<<" ,num2= "<<num2<<endl;
        	 temp=num1; //temp store the value of num1
    	     num1=num2;//num1 store the value of num2
             num2=temp;//num2 store the value of num1(temp store num1)
      cout<<"Number after swapping"<<endl;
             //change the value of num1 & num2 
         cout<<"num1= "<<num1<<" ,num2= "<<num2<<endl;
     return 0;
     
}
