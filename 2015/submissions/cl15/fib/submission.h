
unsigned long long fibo(int n)
{
	unsigned long long f1,f2,f3;
	int i;
	f1=1,f2=1;
	for(i=3;i<=n;i++)
		{
			f3=f1+f2;
			f1=f2;
			f2=f3;
		}
	return f3;
}

