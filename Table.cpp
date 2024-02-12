//Create a program which print the table of 2 up to 12 using pointers?
#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Please enter the number for which you want to print the table: "<<endl;
    cin>>x;
    for(int i=1;i<=10;i++)
    {
        cout<< x <<" * "<< i <<" = "<< x*i <<endl;
    }
    return 0;
}