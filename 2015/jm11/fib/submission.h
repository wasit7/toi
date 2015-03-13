#include<stdio.h>
int fi[1000]={0};
int f(int x)
{
    if(fi[x] != 0) return fi[x];
    else
    {
        fi[x] = f(x-1)+f(x-2);
        return fi[x];
    }
}
main()
{
      int x;
      fi[0] = 0;
      fi[1] = 1;
      fi[2] = 1;
      scanf("%d",&x);
      printf("%d",f(x));
      scanf(" ");
}
