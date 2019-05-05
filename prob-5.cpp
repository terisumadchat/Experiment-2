#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
    int n = 22, x = 0, y = 1, z = 0;

cout << "Fibonacci Series: \n";

for (int a = 1; a <= n; ++a)
    {
    
        if(a == 1)
        {
            cout << " " << x << " , ";
            continue;
        }
        
        if(a == 2)
        {
            cout << y <<" , ";
            continue;
        }
        
        
        z = x + y;
        x = y;
        y = z;
        
 cout << z<< " , ";
    }
    
    
getch();
return 0;

}
