unsigned long long int fib(int n){
    int a[10000],n,i;
    for(i=3;i<=n;i++){
        a[i] = a[i-1]+a[i-2];
    }
    return a[n];
}
