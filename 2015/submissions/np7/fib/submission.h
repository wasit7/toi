#include "stdio.h"

unsigned long long fib(int n)
{
    unsigned long long f[n+1];
    int i;
    f[0] = 0;
    f[1] = 1;
    for(i=2;i<=n;i++)
        f[i] = f[i-1]+f[i-2];
    return f[n];
}
