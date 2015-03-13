#include<stdio.h>
unsigned long long int fib(int n)
{
    int i;
    unsigned long long int fy,f1,f2;
    f1 = 0;
    f2 = 1;
    for(i=2;i<=n;i++)
    {
        fy = f2+f1;
        f1=f2;
        f2=fy;
    }
    return fy;
}

