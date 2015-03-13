unsigned long long fib(int x)
{
    if(x==0) return 0;
    else if(x==1 || x==2) return 1;
    else
    {
        return = fib(x-1)+fib(x-2);
    }
}
