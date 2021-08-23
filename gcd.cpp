#include "functions.h"

int nr_gcd(int x, int y)
{
   int z;
   while(x % y != 0)
   {
    z = x % y;
    x = y;
    y = z;
   }
   return(y);
}
int r_gcd(int x, int y)
{
   if(y == 0)
   {
      return(x);
   }
   else
   {
     return(recgcd(y, x % y));
   }
}