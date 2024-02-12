//Compile a C++ program to find the largest number from the array of 7 numbers using pointer ?
#include<iostream>
using namespace std;
int main()
{
   int arr[7];
   int *p;
   p=arr;
   cout<<"Enter 7 number : "<<endl;
   for(int i=0;i<7;i++)
   {
    cin>> *(p + i);
   }
   int largest=*p;
   for(int i=1;i<7;i++)
   {
    if(*(p + i)>largest)
    {
        largest = *(p + i);

    }
   }
   cout<<"The Largest number in the array : "<<largest<<endl;
   return 0;

}