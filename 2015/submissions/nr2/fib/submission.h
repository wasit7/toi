#include <stdio.h>
unsigned long long fib(int n) {
    unsigned long long  a=0,b=1,temp;
    int i;
    for(i=0;i<=n;i++) {
        temp = a+b;
        a = b;
        b = temp;
        //printf("%llu\n",a);

    }
    return a;
}




