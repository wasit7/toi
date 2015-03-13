#include "stdio.h"

unsigned long long int fib(int n){
    unsigned long long int f[101];
    int i;
    f[0] = 0;
    f[1] = 1;
    for(i = 2; i <= n; i++){
        f[i] = f[i-1]+f[i-2];
    }
    return f[n];
}
