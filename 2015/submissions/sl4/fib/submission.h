unsigned long long fib(int x)
{
	unsigned long long fib0 = 0, fib1 = 1, fib2;
	int i = 2;
	while(i<= x)
	{
		fib2 = fib0 + fib1;
		fib0 = fib1;
		fib1 = fib2;
		i++;
	}
	if(x == 0) return 0;
	if(x == 1) return 1;
	return fib2;
}
