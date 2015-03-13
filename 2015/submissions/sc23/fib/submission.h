unsigned long long fib(int x){
	unsigned long long a[100500]={0,1}
	for(int i=2;i<=x;i++){
		a[i]=a[i-1]+a[i-2]
	} 
	return a[x];
}
