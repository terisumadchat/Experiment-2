#include<iostream>
#include <cstdlib>
#include <iomanip>
#include <math.h>
#include <conio.h>
#include <cmath>
using namespace std;

int main()
{
  double y,v,number;
  double number1;
  const double z=2.5;
  int x;

  cout <<"Input x: ";
  cin>> x;
  cout << "Input y: ";
  cin>>y;

switch(x)
{
 case 1: 
  if(y>1&&y<5)
  {
    v=x*y*z;
    cout << "V = "<<setw(10)<<v<<setprecision(2);
  }
  else if (y>=5)
  {
    v=x+(y/z);
    cout << "V = "<<setw(10)<<v<<setprecision(2);
  }
  else
  {
    v=x+y+z;
    cout << "V = "<<setw(10)<<v<<setprecision(2);
  }
  break;
  
 case 2:
  if(y<=5)
  {
    number1=(x-y)/z;
    v=abs(number1);
    cout << "V = "<<setw(10)<<v<<setprecision(2);
  }
  else if (y>5)
  {
    number=sqrt(y+z);
    v=x-number;
    cout << "V = "<<setw(10)<<v<<setprecision(2);
  }
  else
  {
    v=x+y+z;
    cout << "V = "<<setw(10)<<v<<setprecision(2);
  }
  break;


 default:
  v=x+y+z;
  cout << "V is equal to:"<<setw(10)<<v<<setprecision(2);
}
  
getch();
return 0;
}
