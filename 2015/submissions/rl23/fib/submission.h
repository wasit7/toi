#include "stdio.h"
int f[40];
long int fib(int n)
{
    if(n==0||n==1) return f[n];
    else if(f[n]!=0) return f[n];
    else
    {
    f[n]=fib(n-1)+fib(n-2);
    return f[n];
    }
}
main()
{
    int n;
    long int y;
    for(n=0;n<40;n++) {f[n]=0;}
    f[1]=1;
    scanf("%d",&n);
    y=fib(n);
    printf("%ld",y);
}
