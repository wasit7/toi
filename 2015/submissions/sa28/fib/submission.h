#include <stdio.h>
unsigned long long fib(int n)
{
    unsigned long long tn,tf,f1=1,f2=1;
    if(n<2)
     return f1;
    else
    {
      for(tn=1;tn<=n;tn++)
      {
            tf = f2;
            f2 += f1;
            f1 = tf;
      }
      return f2;
    }
}
