unsigned long long fib(int x)
{
    unsigned long long a, b, c;
    a = 1;
    b = 1;
    int i;
    for (i = 3; i <= x; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}
