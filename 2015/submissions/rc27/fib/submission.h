unsigned long long fib(int x){
    unsigned long long A[60]={0,1},i;
    for(i=2;i<=x;i++){
        A[i]=A[i-1]+A[i-2];
    }
    return A[x];
}
