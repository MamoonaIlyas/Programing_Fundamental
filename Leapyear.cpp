//C++ program to check leap year?
#include<iostream>
using namespace std;
int leap_year(int year)//function is leap_year
//Function declaration
 {
  int year1,year2,year3;	
  // leap year if perfectly divisible by 400
  year1=(year % 400 == 0);
    {
  // not a leap year if divisible by 100
  // but not divisible by 400
  year2=(year % 100 == 0);
   }
    {
  // leap year if not divisible by 100
  // but divisible by 4
  year3= (year % 4 == 0);
   }
    return year1;
    return year2;
    return year3;
  
}
//Function call
int main()
 {
  int year,year1,year2,year3;
  cout << "Enter a year: ";
  cin >> year;
  year1=leap_year(year);
  year2=leap_year(year);
  year3=leap_year(year);
  if(year1)
   {
    cout << year << " is a leap year.";
   }
   else if(year2)
   {
    cout << year << " is not a leap year.";
   }
   else if (year3)
   {
    cout << year << " is a leap year.";
   }
  // all other years are not leap years
  else 
  {
    cout << year << " is not a leap year.";
  }

   
}

