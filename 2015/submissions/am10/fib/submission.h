unsigned long long fib(int x){
    unsigned long long f[50]={0,1};
    for(int i = 2; i <= x; i++){
        f[i] = f[i - 1] + f[i - 2];
    }
    return f[x];
}
