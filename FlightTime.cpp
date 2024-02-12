//Write a program to display flight time?
#include <iostream> 
using namespace std; 
struct flight  
{ 
  int Flight_no; 
  int Hours;       int Minutes;     int Seconds; 
}; 
 
void Display_time(const flight& f)  
{ 
    cout << "Arrival time for flight " << f.Flight_no << ": ";    
    cout << f.Hours << " hours, " << f.Minutes << " minutes, " << f.Seconds << " seconds" << endl; 
} 
int main()  
{    
   flight f1, f2; 
    cout << "Enter arrival time for flight 1 (hours minutes seconds): ";     
	  cin >> f1.Hours >> f1.Minutes >> f1.Seconds;     f1.Flight_no = 1; 
    cout << "Enter arrival time for flight 2 (hours minutes seconds): ";    
      cin >> f2.Hours >> f2.Minutes >> f2.Seconds;     f2.Flight_no = 2; 
    Display_time(f1);     
	Display_time(f2); 
    return 0; 
} 


