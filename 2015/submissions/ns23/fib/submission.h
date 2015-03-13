unsigned long long fib(int n)
{
    int i;
    unsigned long long a[100005];
    a[0]=1;
    a[1]=1;
    scanf("%d",&n);
    for(i=2;i<n;i++)
        a[i]=a[i-1]+a[i-2];
    return a[n-1];
}
