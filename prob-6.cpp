#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
 int a, sum=0;
 
 
   do{
   
   cout<<"Please enter a number: "; 
   cin>>a;

if(a<=0){
      cout<<"salamathanks";
   }
   
   
else{
    
     int b=1;
     while(b<=a){
	 sum=sum+b;
	 b++;
     }
     
     
     cout<<"The sum of the numbers from 1 to "<< a << " is =  "<<sum<< ". \n";
   }
   
   sum=0;
   
} 

while (a!=0);
  
 getch();
return 0;

}

