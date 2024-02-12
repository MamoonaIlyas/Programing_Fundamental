//Create a C++ program to print the following * patterns using for loop ?
#include<iostream>
using namespace std;
int main()
{
    
    for(int i=1;i<=6;i++)
    {
        for(int j=1;j<=i;j++)
        cout<<" * ";
        cout<<endl;
    }
    return 0;
}