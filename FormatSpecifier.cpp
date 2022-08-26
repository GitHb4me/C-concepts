#include <stdio.h>
int sumdigits()
{
  int x, y;
  scanf("%d%d", &x, &y); //place holder or format specifier
  return x+y;
  printf("%d%d",x+y);//printf directly performs operation 
  printf("%0.4f,%0.2f",3.88657+5.33356) // we can use "setprecision" in c++ for this purpose but this concept also valid as of C 
}             // it also rounds off decimal if threshold's next occuring digit is >=5 then ++1 else no increment 
              // eg output is 3.8866+5.33 = 
