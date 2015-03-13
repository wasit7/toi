//#ifndef SUBMISSION_H
//#define SUBMISSION_H

//#endif // SUBMISSION_H
unsigned long int dy[105];
unsigned long long int fib(int a)
{
    if(dy[a]!=0) return dy[a];
    if(a<=2) return 1;
    dy[a]=f(a-1)+f(a-2);
    return f(a-1)+f(a-2);
}
