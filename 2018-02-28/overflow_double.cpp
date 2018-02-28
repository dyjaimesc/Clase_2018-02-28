#include <iostream>
#include <cmath>

double fsuma(void);
double fmin(void);


int main()
{
  std::cout.precision(16); 
  double variable=0.0,min=0.0;
  variable=fsuma();
  min=fmin();
  std::cout<<"el mayor entero float es "<<variable<< " \n";
  std::cout<<"el menor entero float es "<<min<< " \n";
  return 0;
}

double fsuma(void)
{
  double x=12.0,y=0.0,m=0;
  int parar=10;
  
  while(parar==10)
    {
      y=x;
      x*=2.0;
      m++;
      // std::cout<<x<<"\n";
      if(isinf(x))
	{
	  parar=0;
	}
     
    }
  return y;
}

double fmin(void)
{
  double x=1.0,y=0.0;
  int parar=10;
  
  while(x!=0)
    { y=x;
      x/=2.0;
       //  std::cout<<x<<"\n";
    }
  return y;
}
