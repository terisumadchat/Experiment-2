#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
   {
  int prev;                
  int current;       
  int demand=35;        
  double php_per_gallon=1.10;       
  int overdue=20;         
  int gallons;          
  double bill;          
  char outstanding_balance;  
  char y;      
  
  
  cout<<endl<<"Enter Previous Reading: ";
  cin>>prev;      
  cout<<endl<<"Enter Current Reading: ";
  cin>>current;       
  cout<<endl<<"do you have any unpaid or outstanding balance? (Press 'Y' or 'N'): ";
  cin>>outstanding_balance;        
  gallons=current-previous;
  
  
  if (outstanding_balance== 'N')       
  {
   bill=(php_per_gallon*gallons)+demand;
  }
  else
  {
   bill=(php_per_gallon*gallons)+demand+overdue; 
  }
  cout<<endl<<"Total Bill="<<bill<<"php"<<endl;    

getch();
return 0;
}
