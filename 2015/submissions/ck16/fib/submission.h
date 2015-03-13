unsigned long long fib(int n)
{
   int  i;
    unsigned long int fn;
 if(n==0)return 0;
 else if(n==1||n==2)return 1;
 unsigned long long int f0=0;
 unsigned long long int f1=1;
 for(i=0;i<n-1;i++)
 {
     fn=f0+f1;
    f0=f1;
     f1=fn;
 }
 return fn;
}
