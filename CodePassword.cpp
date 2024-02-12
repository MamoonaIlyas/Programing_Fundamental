//Write a program to show password in code form for example asteric,dot?
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{

char pass[5];
	int i=0;
	cout<<"\n\n Password : ";
	pass[0]=_getch();
	while(pass[i]!=13)
	{
		i++;
		cout<<"*";
		pass[i]=_getch();
	}
	
	cout<<"\n\n";
	
	cout<<"Show password  : "<<pass;
	
	getch();
}