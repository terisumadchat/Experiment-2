#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

    int main()
    {
    	char package;
    	int hours;
    cout << "The following internet packages below are available for subscription\n";
    cout << "                                                           \n";
    cout << "Package A: Php995/mo for 10 hrs of internet access with additional Php20 per succeeding hours.\n";
    cout << "Package B: Php1495/mo for 20 hrs of internet access with additional Php10 per succeeding hours.\n";
    cout << "Package C: Php1995/mo for unlimited internet access.\n";
    cout << "                                                           \n";
    
    
	cout << "Enter your chosen package: \n";
	cin >> package;
	   cout << "                                                        \n";
	cout << "Enter your hours of usage: \n";
	cin >> hours;
	   cout << "                                                        \n";	

	if(package == 'A' || package == 'a')
	{if (hours <= 10)
	cout<<"\nYour monthly bill is: Php995";
	else cout<<"\nYour monthly bill is: Php"<<995+(hours-10)*20;}

	if(package == 'B' || package == 'b')
	{if (hours <= 20)
	cout<<"\nYour monthly bill is: Php1495";
	else cout<<"\nYour monthly bill is: Php"<<1495 +(hours - 20)*10;}

	if(package == 'C' || package == 'c')
	cout<<"\nYour monthly bill is: Php1995";	
        getch();
        return 0;
    }
