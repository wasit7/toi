int fib(const int n){
    int f0 = 0, f1=1;
    int fn=1;
    int i;
    for (i=1; i<n; i++){
        fn = f0 + f1;
        f0 = f1;
        f1 = fn;
    }
    return fn;
}

