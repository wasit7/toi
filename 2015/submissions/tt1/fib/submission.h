unsigned long long table[1000000];

unsigned long long fib(unsigned long long n)
{
         if(n == 0)
              return 0;
         if(n == 1)
              return 1;
         
         if(table[n] == 0)
         {
             unsigned long long newN = fib(n-2) + fib(n-1);
             table[n] = newN;
         }
             
         return table[n];
}
