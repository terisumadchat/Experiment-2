#include<iostream>
#include <cstdlib>
#include <iomanip>
#include <math.h>
#include <conio.h>
using namespace std;

int main()
{
  double x,y,a,number;
  int number1;
  const double c=2.5;

  cout <<"Input the value of x: ";
  cin>> x;
  cout << "Input the value of y: ";
  cin>>y;

switch(x<3)
{
 case 1: 
  if(y>1&&y<5)
  {
    a=x*y*c;
    cout << "A = "<<setw(10)<<a<<setprecision(2);
  }
  else if (y>=5)
  {
    a=x+(y/c);
    cout << "A = "<<setw(10)<<a<<setprecision(2);
  }
  else
  {
    a=x+y+c;
    cout << "A = "<<setw(10)<<a<<setprecision(2);
  }
  break;
  
 case 2:
  if(y<=5)
  {
    number=(x-y)/c;
    a=abs(number1);
    cout << "A = "<<setw(10)<<a<<setprecision(2);
  }
  else if (y>5)
  {
    number=sqrt(x+c);
    a=x-number;
    cout << "A = "<<setw(10)<<a<<setprecision(2);
  }
  else
  {
    a=x+y+c;
    cout << "A = "<<setw(10)<<a<<setprecision(2);
  }
  break;


 default:
  a=x+y+c;
  cout << "A is equal to:"<<setw(10)<<a<<setprecision(2);
}
  
getch();
return 0;
}
