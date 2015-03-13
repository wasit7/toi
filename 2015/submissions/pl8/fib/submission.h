unsigned long long fib_data[41];
unsigned long long fib(long long n){
    if(fib_data[n]!=0){
        return fib_data[n];
    }
    if(n<2){
        fib_data[n]=n;
        return n;
    }
    fib_data[n]=fib(n-1)+fib(n-2);
    return fib_data[n];
}
