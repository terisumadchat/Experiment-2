#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()	
{
int count;
int a;
  
count=1;
  		
for (a=1; a<=10; a++)
	{
  		cout << count << " , ";
  		count ++;
	}
		
for (count=12; count <=30;)
  	{
 		cout << count << " , ";
  		count +=2;  			
	}	
	
	getch ();
	return 0;  		
	}
