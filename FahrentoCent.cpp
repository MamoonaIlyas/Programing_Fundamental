//Temperature of a city in Fahrenheit degrees is input through the keyboard. Write a program to convert this 
//temperature into Centigrade degrees. C=(F-32)/1.8 ?
#include<iostream>
using namespace std;
int main()
{
float F,C;
cout<<"Enter fahrenhiet :"<<endl;
cin>>F;
C=(F-32)/1.8;
cout<<"centegrade :";
cout<<C<<endl;
system("pause");
return 0;
}

