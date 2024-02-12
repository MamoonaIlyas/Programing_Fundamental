//Create a program which solve the following mathematical equation:  -b+b^2-4ac / 2a 
//Where a, b & c will be entered by users, your program should create the result. 
#include<iostream>
using namespace std;
int main()
{
float a,b,c,d;
cout<<"Enter coefficient a,b and c: "<<endl;
cin>>a>>b>>c;
d=b*b-4*a*c;
float Result;
Result=(-b+d)/(2*a);
cout<<"Result :"<<Result<<endl;
system("pause");
return 0;
}