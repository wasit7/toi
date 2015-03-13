unsigned long long fib(int x)
{
    
    if(x==1||x==2)
      return 1;
      return fib(x-1)+fib(x-2);
}
