//Take three number input and tell if they can be the sides of a triangle?
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter sides ";
    cin>>a>>b>>c;
    if((a+b)>c && (b+c)>a && (c+a)>b)
    cout<<"VALID TRIANGLE";
    else
      cout<<"INVALID TRIANGLE";
}